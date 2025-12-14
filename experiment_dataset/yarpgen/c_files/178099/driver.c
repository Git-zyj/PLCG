#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -831162202;
short var_5 = (short)-1572;
unsigned char var_7 = (unsigned char)129;
signed char var_8 = (signed char)19;
short var_11 = (short)23118;
unsigned char var_12 = (unsigned char)33;
int zero = 0;
unsigned long long int var_13 = 6866205070800915635ULL;
unsigned short var_14 = (unsigned short)6867;
unsigned short var_15 = (unsigned short)31973;
short var_16 = (short)17940;
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
