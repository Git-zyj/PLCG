#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
short var_1 = (short)13258;
unsigned short var_4 = (unsigned short)56086;
signed char var_10 = (signed char)50;
int zero = 0;
signed char var_12 = (signed char)44;
unsigned long long int var_13 = 13376980247540064339ULL;
unsigned int var_14 = 159065113U;
unsigned short var_15 = (unsigned short)41016;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
