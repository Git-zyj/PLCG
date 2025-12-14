#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)68;
unsigned int var_2 = 511158481U;
long long int var_6 = -2603983968676470925LL;
unsigned short var_7 = (unsigned short)8024;
unsigned short var_8 = (unsigned short)38008;
signed char var_12 = (signed char)-61;
int zero = 0;
unsigned char var_14 = (unsigned char)103;
short var_15 = (short)-32002;
unsigned long long int var_16 = 1771257250595404074ULL;
unsigned int var_17 = 2340222437U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
