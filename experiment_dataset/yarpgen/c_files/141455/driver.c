#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
unsigned char var_2 = (unsigned char)82;
unsigned short var_3 = (unsigned short)60128;
signed char var_7 = (signed char)56;
unsigned int var_8 = 3135485215U;
int zero = 0;
unsigned char var_12 = (unsigned char)129;
signed char var_13 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
