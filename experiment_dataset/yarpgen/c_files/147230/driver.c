#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 52592117U;
unsigned int var_3 = 2252220019U;
unsigned char var_7 = (unsigned char)204;
signed char var_9 = (signed char)96;
short var_11 = (short)-17625;
int zero = 0;
short var_16 = (short)14948;
long long int var_17 = -844136318951296267LL;
long long int var_18 = 3667455847127240054LL;
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
