#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3457615646639257251LL;
unsigned short var_3 = (unsigned short)4810;
unsigned int var_4 = 3741469234U;
unsigned char var_9 = (unsigned char)241;
int zero = 0;
short var_15 = (short)-14392;
signed char var_16 = (signed char)76;
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
