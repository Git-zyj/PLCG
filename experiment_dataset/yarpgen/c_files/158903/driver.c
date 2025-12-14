#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-118;
signed char var_5 = (signed char)88;
long long int var_7 = -8337977909707012212LL;
unsigned char var_9 = (unsigned char)124;
signed char var_11 = (signed char)-74;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)60357;
int var_16 = 1760168929;
int var_17 = 1179724982;
long long int var_18 = 1063154512257738135LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
