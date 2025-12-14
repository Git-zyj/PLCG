#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 45487975;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 461064762U;
unsigned char var_6 = (unsigned char)130;
unsigned short var_7 = (unsigned short)65403;
int zero = 0;
int var_10 = 791274064;
signed char var_11 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
