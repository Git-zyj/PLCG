#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)188;
unsigned int var_5 = 1302597354U;
signed char var_6 = (signed char)2;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 18428954883802815389ULL;
unsigned char var_21 = (unsigned char)253;
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
