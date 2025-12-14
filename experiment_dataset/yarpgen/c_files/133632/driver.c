#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3902040661U;
unsigned int var_7 = 1692980661U;
int zero = 0;
unsigned short var_15 = (unsigned short)16595;
signed char var_16 = (signed char)15;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3728531280902542228LL;
signed char var_19 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
