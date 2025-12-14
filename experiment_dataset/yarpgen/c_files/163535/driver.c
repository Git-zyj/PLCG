#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
int var_3 = 769534517;
unsigned int var_4 = 2065913241U;
int var_9 = 209436118;
short var_11 = (short)-6638;
int zero = 0;
long long int var_12 = 7351992053885372014LL;
unsigned short var_13 = (unsigned short)65527;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
