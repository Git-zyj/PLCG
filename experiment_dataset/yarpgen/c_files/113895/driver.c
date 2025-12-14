#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3820416955U;
int var_1 = -530292925;
unsigned int var_2 = 2352439570U;
unsigned char var_3 = (unsigned char)19;
_Bool var_4 = (_Bool)1;
short var_8 = (short)-16520;
unsigned char var_10 = (unsigned char)200;
unsigned short var_11 = (unsigned short)51154;
int zero = 0;
int var_12 = -1933788277;
int var_13 = 1545661051;
unsigned short var_14 = (unsigned short)65461;
short var_15 = (short)-5893;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
