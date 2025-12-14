#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)22437;
unsigned long long int var_8 = 10851482989861930264ULL;
unsigned int var_9 = 3717578317U;
unsigned char var_11 = (unsigned char)116;
int zero = 0;
unsigned short var_16 = (unsigned short)44209;
unsigned short var_17 = (unsigned short)30450;
unsigned char var_18 = (unsigned char)14;
unsigned int var_19 = 2738826546U;
int var_20 = -980650784;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
