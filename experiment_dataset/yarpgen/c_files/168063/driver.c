#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
int var_5 = -1194458807;
unsigned long long int var_6 = 16082772054192182910ULL;
unsigned int var_7 = 4097666345U;
unsigned char var_9 = (unsigned char)61;
unsigned char var_14 = (unsigned char)198;
int zero = 0;
int var_19 = -848899719;
signed char var_20 = (signed char)44;
void init() {
}

void checksum() {
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
