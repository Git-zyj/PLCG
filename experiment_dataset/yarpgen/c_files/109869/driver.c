#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)93;
long long int var_10 = 8579919553362155460LL;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)11;
int zero = 0;
long long int var_16 = 8849503122840496679LL;
short var_17 = (short)-4873;
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
