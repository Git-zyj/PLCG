#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2210076876U;
unsigned int var_4 = 3418178903U;
unsigned int var_10 = 2234529121U;
int zero = 0;
unsigned short var_14 = (unsigned short)57726;
short var_15 = (short)13589;
unsigned char var_16 = (unsigned char)25;
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
