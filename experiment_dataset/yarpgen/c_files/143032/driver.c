#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1663607298;
unsigned int var_6 = 1237224703U;
unsigned char var_7 = (unsigned char)99;
int var_9 = 1116154756;
signed char var_11 = (signed char)-83;
unsigned short var_12 = (unsigned short)37720;
int var_14 = 1702670190;
int zero = 0;
unsigned long long int var_15 = 14571944066743294778ULL;
signed char var_16 = (signed char)62;
unsigned char var_17 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
