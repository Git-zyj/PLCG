#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 314165267;
unsigned short var_2 = (unsigned short)63308;
unsigned int var_5 = 1746071445U;
unsigned int var_8 = 2738037375U;
unsigned int var_10 = 3076616760U;
int zero = 0;
unsigned short var_20 = (unsigned short)65347;
int var_21 = 1011337382;
void init() {
}

void checksum() {
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
