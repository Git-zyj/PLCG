#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49116;
unsigned long long int var_3 = 15414602482908306035ULL;
unsigned short var_4 = (unsigned short)27557;
unsigned short var_5 = (unsigned short)63033;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)168;
unsigned int var_12 = 2888246431U;
int zero = 0;
signed char var_14 = (signed char)91;
unsigned long long int var_15 = 6021960969174458998ULL;
unsigned int var_16 = 2986783604U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
