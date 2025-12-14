#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
unsigned int var_5 = 2135264311U;
unsigned long long int var_8 = 306841571759827427ULL;
short var_11 = (short)3846;
signed char var_12 = (signed char)106;
int zero = 0;
signed char var_14 = (signed char)61;
unsigned char var_15 = (unsigned char)79;
_Bool var_16 = (_Bool)0;
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
