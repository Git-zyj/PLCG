#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_13 = (short)-10276;
signed char var_14 = (signed char)5;
int zero = 0;
unsigned int var_17 = 4073272089U;
unsigned int var_18 = 3440969545U;
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
