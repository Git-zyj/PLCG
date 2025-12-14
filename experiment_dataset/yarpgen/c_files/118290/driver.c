#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4570831840428566671ULL;
int var_3 = 202241901;
unsigned char var_4 = (unsigned char)48;
unsigned long long int var_6 = 4966319653124475792ULL;
long long int var_7 = 1971153838917260784LL;
long long int var_10 = 5060790479513311472LL;
int zero = 0;
unsigned int var_11 = 1981534673U;
signed char var_12 = (signed char)-124;
long long int var_13 = 7312097938704689346LL;
unsigned int var_14 = 221754717U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
