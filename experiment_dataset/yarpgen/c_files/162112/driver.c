#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)93;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)45;
unsigned char var_19 = (unsigned char)223;
unsigned char var_20 = (unsigned char)154;
unsigned long long int var_21 = 9947281007539115566ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
