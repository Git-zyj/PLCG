#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
unsigned char var_2 = (unsigned char)237;
unsigned char var_3 = (unsigned char)239;
int var_5 = -2138564149;
_Bool var_7 = (_Bool)0;
int var_9 = -2125711812;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)49;
int zero = 0;
unsigned char var_15 = (unsigned char)37;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)30;
int var_18 = -6639973;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
