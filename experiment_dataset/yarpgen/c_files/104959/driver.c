#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
unsigned char var_5 = (unsigned char)84;
short var_6 = (short)2801;
short var_9 = (short)-19577;
int var_10 = 200555720;
int zero = 0;
unsigned long long int var_13 = 361107697496066870ULL;
unsigned char var_14 = (unsigned char)165;
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
