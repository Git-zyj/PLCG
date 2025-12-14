#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2590068274U;
unsigned int var_10 = 4017590861U;
unsigned short var_13 = (unsigned short)4283;
int zero = 0;
short var_15 = (short)28832;
unsigned char var_16 = (unsigned char)193;
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
