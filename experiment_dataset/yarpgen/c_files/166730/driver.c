#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28493;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-32;
unsigned int var_5 = 3943076356U;
signed char var_8 = (signed char)-52;
_Bool var_10 = (_Bool)1;
int var_14 = 442561961;
int zero = 0;
unsigned int var_15 = 67985884U;
unsigned char var_16 = (unsigned char)77;
void init() {
}

void checksum() {
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
