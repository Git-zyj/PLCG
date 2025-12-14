#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)68;
int var_11 = -1050245148;
long long int var_12 = -6766681466099307299LL;
unsigned char var_15 = (unsigned char)61;
int zero = 0;
unsigned int var_20 = 4193341885U;
short var_21 = (short)-19496;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
