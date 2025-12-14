#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)127;
signed char var_5 = (signed char)-83;
unsigned short var_7 = (unsigned short)2886;
int zero = 0;
unsigned int var_12 = 3319345125U;
unsigned int var_13 = 4132022588U;
short var_14 = (short)27347;
unsigned char var_15 = (unsigned char)54;
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
