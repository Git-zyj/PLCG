#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -3303227701034232157LL;
long long int var_12 = 2916719518403731884LL;
unsigned int var_14 = 3218063362U;
int zero = 0;
unsigned char var_15 = (unsigned char)94;
unsigned short var_16 = (unsigned short)46742;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
