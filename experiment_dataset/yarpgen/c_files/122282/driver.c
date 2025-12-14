#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1355;
unsigned short var_4 = (unsigned short)39761;
unsigned short var_5 = (unsigned short)57483;
int zero = 0;
int var_13 = -759306994;
short var_14 = (short)-28580;
unsigned short var_15 = (unsigned short)11768;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
