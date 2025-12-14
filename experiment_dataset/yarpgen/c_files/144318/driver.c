#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16681480628649629867ULL;
long long int var_6 = -2109519770334573648LL;
unsigned int var_9 = 3562683875U;
unsigned char var_10 = (unsigned char)245;
unsigned int var_12 = 2480823388U;
unsigned char var_15 = (unsigned char)247;
signed char var_16 = (signed char)11;
int zero = 0;
unsigned char var_17 = (unsigned char)68;
unsigned char var_18 = (unsigned char)87;
signed char var_19 = (signed char)74;
unsigned char var_20 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
