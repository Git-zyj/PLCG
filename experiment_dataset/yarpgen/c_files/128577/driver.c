#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_4 = -1200331758;
unsigned short var_6 = (unsigned short)37639;
unsigned short var_13 = (unsigned short)3603;
unsigned short var_15 = (unsigned short)15614;
int zero = 0;
long long int var_17 = -6523567131449217857LL;
unsigned short var_18 = (unsigned short)30394;
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
