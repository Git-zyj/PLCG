#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6704672748552741361ULL;
_Bool var_2 = (_Bool)0;
int var_3 = -860219160;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 9379585537690079246ULL;
unsigned long long int var_9 = 10426045065360125107ULL;
unsigned long long int var_14 = 3991207012136411104ULL;
int zero = 0;
unsigned long long int var_15 = 6514898914851578103ULL;
int var_16 = -2020718940;
int var_17 = 2005528351;
int var_18 = -1293331982;
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
