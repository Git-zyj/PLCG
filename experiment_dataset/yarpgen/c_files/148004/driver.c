#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
signed char var_2 = (signed char)69;
short var_5 = (short)-794;
unsigned char var_6 = (unsigned char)161;
unsigned long long int var_9 = 8454168335759858152ULL;
unsigned short var_10 = (unsigned short)18008;
int zero = 0;
long long int var_11 = -2329487977688768604LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-12720;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
