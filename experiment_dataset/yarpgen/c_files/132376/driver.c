#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8391186836462308228LL;
long long int var_5 = -2630434417108416880LL;
unsigned long long int var_6 = 15276090265401163416ULL;
long long int var_7 = 2941635914253239506LL;
int var_8 = 1580817959;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 2810713334U;
unsigned int var_13 = 3548475188U;
unsigned int var_15 = 2292518698U;
int zero = 0;
unsigned long long int var_16 = 17657463088113456926ULL;
unsigned int var_17 = 3125054366U;
unsigned int var_18 = 2543852317U;
void init() {
}

void checksum() {
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
