#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)234;
signed char var_7 = (signed char)-50;
unsigned short var_11 = (unsigned short)28509;
unsigned short var_14 = (unsigned short)4233;
int zero = 0;
signed char var_18 = (signed char)119;
unsigned int var_19 = 1527032951U;
void init() {
}

void checksum() {
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
