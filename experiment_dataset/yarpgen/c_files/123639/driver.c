#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 306138950U;
short var_9 = (short)236;
unsigned char var_10 = (unsigned char)23;
short var_11 = (short)22693;
int var_12 = 158825449;
short var_18 = (short)-4279;
int zero = 0;
unsigned char var_19 = (unsigned char)84;
long long int var_20 = 2515472534891747914LL;
unsigned char var_21 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
