#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46142;
unsigned short var_2 = (unsigned short)35124;
unsigned long long int var_5 = 2767280468467314559ULL;
unsigned short var_10 = (unsigned short)37379;
unsigned short var_11 = (unsigned short)50482;
unsigned short var_12 = (unsigned short)1641;
int zero = 0;
long long int var_19 = 7370222073209910555LL;
long long int var_20 = 2809678071418142614LL;
unsigned short var_21 = (unsigned short)129;
unsigned short var_22 = (unsigned short)33258;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
