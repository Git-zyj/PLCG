#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35622;
unsigned int var_3 = 3702743663U;
unsigned int var_7 = 2985183494U;
unsigned long long int var_8 = 17724007490860602685ULL;
short var_14 = (short)28712;
int zero = 0;
unsigned int var_16 = 4152910196U;
unsigned int var_17 = 322289104U;
unsigned short var_18 = (unsigned short)52043;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
