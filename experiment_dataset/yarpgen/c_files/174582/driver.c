#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)74;
unsigned char var_2 = (unsigned char)91;
unsigned char var_8 = (unsigned char)79;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 2245194344U;
int zero = 0;
signed char var_16 = (signed char)-65;
short var_17 = (short)-15902;
unsigned long long int var_18 = 1658516894404083808ULL;
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
