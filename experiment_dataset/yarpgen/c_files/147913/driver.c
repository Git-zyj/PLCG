#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5027385677405934449LL;
unsigned short var_2 = (unsigned short)35435;
signed char var_9 = (signed char)40;
int zero = 0;
unsigned char var_13 = (unsigned char)239;
int var_14 = -811728301;
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
