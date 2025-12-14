#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 825112732;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)47222;
unsigned char var_6 = (unsigned char)211;
signed char var_8 = (signed char)25;
unsigned int var_10 = 2790288339U;
signed char var_13 = (signed char)2;
int zero = 0;
unsigned char var_15 = (unsigned char)200;
unsigned char var_16 = (unsigned char)36;
void init() {
}

void checksum() {
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
