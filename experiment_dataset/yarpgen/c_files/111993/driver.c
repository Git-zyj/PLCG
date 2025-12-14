#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2301020278U;
unsigned char var_1 = (unsigned char)255;
long long int var_8 = -807240431967518171LL;
int var_9 = 1634200792;
unsigned long long int var_10 = 10608176727434280502ULL;
signed char var_13 = (signed char)97;
unsigned short var_14 = (unsigned short)39859;
int zero = 0;
unsigned char var_16 = (unsigned char)49;
signed char var_17 = (signed char)34;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
