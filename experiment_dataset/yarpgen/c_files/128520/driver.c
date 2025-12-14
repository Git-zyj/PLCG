#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32464;
unsigned short var_7 = (unsigned short)36518;
long long int var_11 = -6488612029836016273LL;
int zero = 0;
unsigned char var_15 = (unsigned char)118;
signed char var_16 = (signed char)-18;
void init() {
}

void checksum() {
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
