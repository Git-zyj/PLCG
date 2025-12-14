#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1992114764;
unsigned char var_5 = (unsigned char)71;
unsigned char var_8 = (unsigned char)197;
unsigned char var_12 = (unsigned char)143;
int zero = 0;
short var_14 = (short)-24404;
short var_15 = (short)-4529;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
