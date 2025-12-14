#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)16;
unsigned char var_13 = (unsigned char)204;
int var_14 = -1490144536;
int zero = 0;
long long int var_15 = -809760258221459039LL;
int var_16 = -1938893059;
signed char var_17 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
