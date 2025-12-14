#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1874107466049136770LL;
unsigned int var_4 = 1088698316U;
unsigned int var_5 = 3264285810U;
signed char var_8 = (signed char)11;
int var_9 = 316442670;
int zero = 0;
unsigned int var_10 = 687121406U;
unsigned char var_11 = (unsigned char)114;
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
