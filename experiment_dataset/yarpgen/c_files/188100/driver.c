#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -899141958;
signed char var_8 = (signed char)90;
unsigned long long int var_9 = 2120694215289421145ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)60865;
unsigned long long int var_12 = 1530652179386989130ULL;
unsigned char var_13 = (unsigned char)157;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4377948379510855141ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
