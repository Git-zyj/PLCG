#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1407150760;
int var_3 = -1484986427;
unsigned char var_6 = (unsigned char)155;
short var_7 = (short)-11424;
int var_12 = 1746489402;
int var_13 = -1832152095;
int zero = 0;
unsigned char var_15 = (unsigned char)100;
int var_16 = 1713585403;
void init() {
}

void checksum() {
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
