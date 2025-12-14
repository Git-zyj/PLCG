#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)154;
signed char var_8 = (signed char)40;
signed char var_12 = (signed char)54;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_20 = 2527711407745352287LL;
unsigned char var_21 = (unsigned char)234;
unsigned long long int var_22 = 4181110458480051945ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
