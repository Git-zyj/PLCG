#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -287437971738296050LL;
unsigned char var_7 = (unsigned char)29;
unsigned char var_8 = (unsigned char)43;
unsigned char var_11 = (unsigned char)29;
unsigned short var_14 = (unsigned short)15952;
unsigned char var_18 = (unsigned char)55;
int zero = 0;
unsigned long long int var_19 = 13648015671735662098ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-23595;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
