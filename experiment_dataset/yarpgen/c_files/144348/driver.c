#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39971;
signed char var_1 = (signed char)-25;
unsigned long long int var_2 = 1422084064959855675ULL;
unsigned long long int var_3 = 12274824103310232574ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)13;
unsigned long long int var_7 = 17317736966411294773ULL;
unsigned char var_8 = (unsigned char)15;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 9891314875103745773ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)10585;
unsigned char var_15 = (unsigned char)96;
short var_16 = (short)-23661;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
