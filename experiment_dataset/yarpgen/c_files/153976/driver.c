#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)112;
short var_4 = (short)-1232;
unsigned int var_7 = 1078977264U;
unsigned char var_9 = (unsigned char)99;
int zero = 0;
unsigned char var_12 = (unsigned char)66;
short var_13 = (short)6261;
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
