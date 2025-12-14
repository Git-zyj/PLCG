#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52398;
int var_7 = 184969312;
signed char var_10 = (signed char)-118;
long long int var_12 = 791476505088727317LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 421447763U;
unsigned long long int var_16 = 12380180801948443442ULL;
long long int var_17 = -3386362720344581713LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
