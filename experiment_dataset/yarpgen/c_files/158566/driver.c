#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-8815;
short var_15 = (short)-21379;
unsigned char var_16 = (unsigned char)235;
int zero = 0;
unsigned char var_20 = (unsigned char)181;
signed char var_21 = (signed char)-101;
signed char var_22 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
