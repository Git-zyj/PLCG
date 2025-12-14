#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-92;
unsigned char var_8 = (unsigned char)88;
signed char var_12 = (signed char)83;
unsigned long long int var_13 = 10185992896184009673ULL;
unsigned char var_15 = (unsigned char)148;
int zero = 0;
unsigned char var_17 = (unsigned char)51;
unsigned long long int var_18 = 9223478380755016834ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
