#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-92;
unsigned int var_11 = 2358152984U;
long long int var_14 = 2572449946286438309LL;
signed char var_15 = (signed char)-127;
int zero = 0;
unsigned short var_16 = (unsigned short)24070;
long long int var_17 = -3141603009584605799LL;
unsigned short var_18 = (unsigned short)21716;
short var_19 = (short)-9976;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
