#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)6961;
unsigned int var_4 = 1884294643U;
signed char var_6 = (signed char)16;
unsigned short var_8 = (unsigned short)49484;
int zero = 0;
unsigned int var_16 = 2924189831U;
short var_17 = (short)18794;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
