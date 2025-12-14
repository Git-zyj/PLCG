#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1477507490;
int var_1 = 878687918;
unsigned char var_5 = (unsigned char)91;
unsigned char var_12 = (unsigned char)191;
int zero = 0;
unsigned int var_13 = 408870892U;
unsigned char var_14 = (unsigned char)71;
unsigned int var_15 = 2861031253U;
void init() {
}

void checksum() {
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
