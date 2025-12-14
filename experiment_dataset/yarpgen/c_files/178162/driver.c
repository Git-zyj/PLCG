#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1862112468U;
unsigned long long int var_2 = 16908913498960200345ULL;
signed char var_3 = (signed char)77;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)162;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)180;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -162566342;
signed char var_13 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
