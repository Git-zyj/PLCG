#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)211;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)91;
unsigned char var_6 = (unsigned char)44;
unsigned char var_8 = (unsigned char)255;
int zero = 0;
unsigned int var_13 = 1385152964U;
signed char var_14 = (signed char)-15;
unsigned char var_15 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
