#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)99;
int var_5 = 1325186791;
unsigned int var_7 = 1449930959U;
int zero = 0;
unsigned char var_10 = (unsigned char)251;
unsigned int var_11 = 4005404540U;
signed char var_12 = (signed char)-32;
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
