#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4106573111U;
short var_6 = (short)24768;
unsigned char var_7 = (unsigned char)232;
unsigned int var_8 = 2530725283U;
unsigned long long int var_17 = 14434937433627756241ULL;
int zero = 0;
int var_20 = 1152867437;
unsigned int var_21 = 1343094385U;
unsigned char var_22 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
