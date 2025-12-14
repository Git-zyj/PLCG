#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)30104;
signed char var_5 = (signed char)7;
unsigned char var_9 = (unsigned char)58;
int zero = 0;
short var_10 = (short)11251;
unsigned char var_11 = (unsigned char)76;
unsigned int var_12 = 903455361U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
