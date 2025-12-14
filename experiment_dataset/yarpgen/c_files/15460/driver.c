#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
unsigned short var_4 = (unsigned short)56416;
signed char var_6 = (signed char)55;
unsigned short var_11 = (unsigned short)10110;
int zero = 0;
int var_16 = 1710815928;
signed char var_17 = (signed char)116;
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
