#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)47;
unsigned char var_13 = (unsigned char)192;
short var_16 = (short)-2279;
int zero = 0;
signed char var_17 = (signed char)113;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
