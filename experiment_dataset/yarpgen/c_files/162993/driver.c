#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15751;
unsigned short var_2 = (unsigned short)60376;
unsigned int var_4 = 2309014506U;
unsigned char var_5 = (unsigned char)43;
unsigned short var_7 = (unsigned short)41872;
int var_8 = -200459110;
int zero = 0;
short var_10 = (short)1524;
unsigned short var_11 = (unsigned short)18541;
unsigned char var_12 = (unsigned char)116;
short var_13 = (short)-27509;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
