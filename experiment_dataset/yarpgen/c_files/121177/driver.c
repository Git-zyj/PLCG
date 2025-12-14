#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)110;
unsigned char var_1 = (unsigned char)5;
long long int var_4 = -7803207757765155823LL;
unsigned int var_5 = 1053834623U;
int var_8 = 1241299737;
int zero = 0;
signed char var_10 = (signed char)94;
long long int var_11 = -5273478080435164223LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
