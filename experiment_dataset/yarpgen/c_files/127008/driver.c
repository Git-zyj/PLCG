#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3543231465838203076LL;
signed char var_3 = (signed char)26;
unsigned char var_5 = (unsigned char)195;
signed char var_7 = (signed char)46;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)232;
unsigned int var_11 = 4273599680U;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 1555416311162385471LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int var_16 = -331986020;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
