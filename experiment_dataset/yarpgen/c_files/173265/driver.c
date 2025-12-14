#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 496907862;
short var_2 = (short)-7796;
unsigned char var_4 = (unsigned char)111;
unsigned short var_5 = (unsigned short)13809;
unsigned char var_6 = (unsigned char)244;
short var_8 = (short)-66;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1409575092U;
int var_13 = -270751853;
unsigned long long int var_14 = 8740332546054557076ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
