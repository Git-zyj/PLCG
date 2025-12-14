#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2633725195U;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 1747238757U;
unsigned int var_13 = 1110735247U;
int zero = 0;
int var_14 = -1725265387;
signed char var_15 = (signed char)-7;
unsigned char var_16 = (unsigned char)43;
unsigned char var_17 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
