#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1785033877U;
int var_8 = 1729596398;
int var_10 = 1910262129;
unsigned int var_11 = 1826404682U;
unsigned short var_12 = (unsigned short)19621;
int var_14 = -571914985;
int var_16 = 1867332624;
short var_19 = (short)2841;
int zero = 0;
unsigned long long int var_20 = 14139021885439577360ULL;
short var_21 = (short)-31652;
unsigned short var_22 = (unsigned short)43964;
signed char var_23 = (signed char)-92;
unsigned short var_24 = (unsigned short)46662;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
