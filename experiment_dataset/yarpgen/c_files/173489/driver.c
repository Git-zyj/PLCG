#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
unsigned int var_1 = 912647797U;
unsigned int var_2 = 58986559U;
unsigned int var_7 = 419519976U;
unsigned long long int var_12 = 4092368674483600504ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)213;
unsigned char var_14 = (unsigned char)146;
void init() {
}

void checksum() {
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
