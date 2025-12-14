#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)19;
unsigned int var_5 = 588056822U;
unsigned short var_6 = (unsigned short)63886;
_Bool var_8 = (_Bool)1;
int var_12 = 108348868;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17872510084945863177ULL;
unsigned short var_17 = (unsigned short)2588;
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
