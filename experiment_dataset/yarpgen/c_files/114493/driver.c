#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3045374560804319160LL;
unsigned int var_11 = 3147147561U;
unsigned int var_13 = 3885763746U;
unsigned char var_14 = (unsigned char)26;
int zero = 0;
unsigned char var_16 = (unsigned char)137;
signed char var_17 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
