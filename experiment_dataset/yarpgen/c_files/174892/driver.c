#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9129489967747748202LL;
unsigned char var_4 = (unsigned char)145;
unsigned short var_6 = (unsigned short)56786;
int var_9 = 1757996902;
short var_11 = (short)29320;
int zero = 0;
unsigned char var_12 = (unsigned char)44;
int var_13 = -1172359212;
unsigned char var_14 = (unsigned char)185;
void init() {
}

void checksum() {
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
