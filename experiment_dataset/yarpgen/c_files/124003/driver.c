#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-59;
signed char var_8 = (signed char)16;
unsigned int var_10 = 1667016773U;
unsigned short var_12 = (unsigned short)54434;
int zero = 0;
unsigned int var_17 = 282954773U;
signed char var_18 = (signed char)-41;
void init() {
}

void checksum() {
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
