#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_4 = (short)32767;
short var_7 = (short)31142;
unsigned int var_9 = 1176434827U;
unsigned char var_11 = (unsigned char)8;
int zero = 0;
signed char var_13 = (signed char)33;
long long int var_14 = 6273799617508616390LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
