#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9426;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)3817;
int zero = 0;
unsigned char var_10 = (unsigned char)210;
unsigned short var_11 = (unsigned short)57706;
unsigned int var_12 = 1477729976U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
