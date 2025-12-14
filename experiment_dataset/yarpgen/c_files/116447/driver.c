#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4531493763205277911LL;
unsigned char var_8 = (unsigned char)76;
unsigned char var_11 = (unsigned char)177;
int zero = 0;
short var_16 = (short)-18333;
int var_17 = -517387989;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
