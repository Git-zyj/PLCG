#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)1013;
short var_5 = (short)17043;
unsigned short var_7 = (unsigned short)24529;
unsigned char var_9 = (unsigned char)166;
long long int var_10 = -7960684807260424244LL;
int var_11 = -1507211420;
short var_12 = (short)9161;
int zero = 0;
unsigned short var_13 = (unsigned short)36138;
unsigned short var_14 = (unsigned short)34315;
unsigned char var_15 = (unsigned char)206;
short var_16 = (short)-13558;
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
