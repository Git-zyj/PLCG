#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2448529201U;
unsigned int var_3 = 3071396874U;
unsigned char var_4 = (unsigned char)182;
unsigned short var_6 = (unsigned short)15205;
signed char var_12 = (signed char)118;
signed char var_15 = (signed char)-84;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
unsigned short var_18 = (unsigned short)52748;
unsigned int var_19 = 774662257U;
void init() {
}

void checksum() {
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
