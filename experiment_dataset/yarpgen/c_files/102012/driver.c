#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3685021392597760466LL;
unsigned char var_2 = (unsigned char)64;
unsigned short var_5 = (unsigned short)11456;
unsigned int var_7 = 4098233796U;
unsigned char var_8 = (unsigned char)6;
int zero = 0;
unsigned char var_12 = (unsigned char)80;
int var_13 = -924896005;
int var_14 = -1166166190;
unsigned char var_15 = (unsigned char)164;
unsigned int var_16 = 3434138088U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
