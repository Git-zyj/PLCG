#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3950850764U;
signed char var_6 = (signed char)75;
long long int var_12 = -5281793519741350925LL;
unsigned long long int var_13 = 10942098784517627546ULL;
unsigned int var_15 = 1044297473U;
short var_17 = (short)2601;
int zero = 0;
unsigned char var_20 = (unsigned char)69;
long long int var_21 = 6541978046364552140LL;
long long int var_22 = 5152874902193658145LL;
long long int var_23 = 2436927705752636744LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
