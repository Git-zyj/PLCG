#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4341003620891151956LL;
unsigned short var_5 = (unsigned short)47716;
int var_6 = 1568437456;
signed char var_8 = (signed char)20;
int var_11 = -349413015;
unsigned int var_13 = 2378746922U;
int zero = 0;
long long int var_16 = -6050745674206321699LL;
short var_17 = (short)-23735;
unsigned short var_18 = (unsigned short)33786;
unsigned char var_19 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
