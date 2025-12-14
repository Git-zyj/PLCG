#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3389443212U;
short var_1 = (short)14817;
signed char var_4 = (signed char)13;
unsigned char var_5 = (unsigned char)85;
signed char var_8 = (signed char)-93;
int zero = 0;
short var_11 = (short)-21264;
unsigned int var_12 = 2165370696U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
