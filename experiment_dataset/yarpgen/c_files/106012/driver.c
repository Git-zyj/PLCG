#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6925855815161372819LL;
signed char var_14 = (signed char)-61;
unsigned short var_15 = (unsigned short)46518;
int zero = 0;
short var_16 = (short)28316;
unsigned int var_17 = 3488218366U;
int var_18 = 709828048;
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
