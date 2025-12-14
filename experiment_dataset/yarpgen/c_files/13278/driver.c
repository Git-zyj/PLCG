#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1924298431U;
signed char var_2 = (signed char)45;
unsigned char var_5 = (unsigned char)75;
long long int var_9 = 6257734765823532200LL;
long long int var_11 = 6662930430574012321LL;
int zero = 0;
unsigned int var_13 = 1494787565U;
unsigned char var_14 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
