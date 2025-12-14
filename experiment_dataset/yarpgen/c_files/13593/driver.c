#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2977;
unsigned long long int var_7 = 4148310109070660316ULL;
_Bool var_8 = (_Bool)0;
short var_10 = (short)2953;
unsigned int var_11 = 2833498523U;
int zero = 0;
unsigned char var_12 = (unsigned char)84;
short var_13 = (short)31871;
signed char var_14 = (signed char)-70;
void init() {
}

void checksum() {
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
