#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 10790130;
int var_3 = 1245398266;
unsigned int var_4 = 2673784668U;
unsigned long long int var_5 = 3827856061838940406ULL;
unsigned int var_6 = 3364798398U;
unsigned char var_8 = (unsigned char)223;
unsigned short var_10 = (unsigned short)51340;
long long int var_11 = 2270697698083021848LL;
unsigned long long int var_12 = 10193822937037957916ULL;
int zero = 0;
signed char var_13 = (signed char)33;
unsigned short var_14 = (unsigned short)3885;
long long int var_15 = 7588959563772527118LL;
long long int var_16 = 4761137886184597582LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
