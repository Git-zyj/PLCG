#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)21;
unsigned char var_12 = (unsigned char)227;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 425930718667586776ULL;
unsigned short var_20 = (unsigned short)61377;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
