#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1081680268;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)50;
unsigned char var_8 = (unsigned char)143;
int var_15 = -210211932;
int zero = 0;
unsigned int var_17 = 2884544579U;
int var_18 = 871168931;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
