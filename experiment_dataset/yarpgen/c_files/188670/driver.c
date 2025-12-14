#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3764322417U;
short var_7 = (short)-6751;
long long int var_8 = 5256127844668526108LL;
unsigned short var_12 = (unsigned short)49108;
int zero = 0;
signed char var_14 = (signed char)2;
short var_15 = (short)4893;
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
