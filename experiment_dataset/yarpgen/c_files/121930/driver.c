#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1544578730U;
unsigned char var_10 = (unsigned char)129;
signed char var_11 = (signed char)-86;
signed char var_13 = (signed char)-108;
int zero = 0;
signed char var_20 = (signed char)65;
unsigned int var_21 = 3857559544U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
