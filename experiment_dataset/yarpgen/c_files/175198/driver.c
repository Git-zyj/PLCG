#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -203723708;
short var_7 = (short)7928;
long long int var_9 = -7604215789455357976LL;
int zero = 0;
unsigned char var_14 = (unsigned char)76;
unsigned char var_15 = (unsigned char)68;
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
