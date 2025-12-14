#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11487;
int var_4 = 1615818057;
int var_6 = -1802710571;
unsigned short var_9 = (unsigned short)29035;
int zero = 0;
short var_14 = (short)-18983;
short var_15 = (short)-32726;
void init() {
}

void checksum() {
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
