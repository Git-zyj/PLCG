#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3395914831799990520LL;
unsigned short var_8 = (unsigned short)36850;
unsigned char var_15 = (unsigned char)5;
int zero = 0;
short var_18 = (short)24455;
unsigned int var_19 = 336214684U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
