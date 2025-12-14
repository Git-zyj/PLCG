#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 463371502;
int var_8 = 605156832;
long long int var_9 = 5918599868850705168LL;
int var_11 = -763391258;
unsigned char var_12 = (unsigned char)88;
long long int var_13 = -8493496125873421461LL;
int zero = 0;
signed char var_14 = (signed char)127;
unsigned char var_15 = (unsigned char)18;
int var_16 = -668287352;
unsigned int var_17 = 268238432U;
int var_18 = 1152776274;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
