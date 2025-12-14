#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13272107561997047406ULL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)25476;
unsigned long long int var_6 = 15708530026156722933ULL;
signed char var_7 = (signed char)-5;
unsigned int var_10 = 546744424U;
unsigned int var_13 = 3922578031U;
unsigned long long int var_14 = 5974105515767456598ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)96;
unsigned int var_18 = 4156963271U;
signed char var_19 = (signed char)-52;
unsigned int var_20 = 1338246947U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
