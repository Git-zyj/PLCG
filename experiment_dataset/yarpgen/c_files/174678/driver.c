#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)254;
unsigned char var_7 = (unsigned char)55;
signed char var_9 = (signed char)47;
int var_10 = -1419468570;
int zero = 0;
unsigned char var_11 = (unsigned char)22;
unsigned short var_12 = (unsigned short)15054;
void init() {
}

void checksum() {
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
