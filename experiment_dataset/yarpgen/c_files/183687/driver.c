#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 873876084;
unsigned char var_9 = (unsigned char)250;
short var_10 = (short)15732;
int zero = 0;
long long int var_14 = 9127753283709129221LL;
long long int var_15 = -5839804985480123371LL;
short var_16 = (short)-7212;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
