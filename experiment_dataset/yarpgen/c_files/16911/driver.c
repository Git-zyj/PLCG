#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)47;
int var_8 = -335924476;
unsigned short var_10 = (unsigned short)2653;
unsigned long long int var_13 = 10478506746167012759ULL;
int zero = 0;
unsigned int var_19 = 3516586895U;
signed char var_20 = (signed char)53;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
