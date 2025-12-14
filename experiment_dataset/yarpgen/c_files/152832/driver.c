#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
unsigned short var_3 = (unsigned short)64133;
unsigned int var_5 = 2188137019U;
unsigned char var_12 = (unsigned char)14;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1159655232U;
unsigned short var_18 = (unsigned short)17154;
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
