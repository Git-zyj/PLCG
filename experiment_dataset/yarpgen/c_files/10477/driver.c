#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1785619354U;
unsigned char var_4 = (unsigned char)149;
unsigned char var_7 = (unsigned char)161;
unsigned char var_8 = (unsigned char)43;
signed char var_10 = (signed char)-100;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -769339802;
unsigned char var_13 = (unsigned char)163;
signed char var_14 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
