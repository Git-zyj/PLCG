#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31003;
unsigned char var_1 = (unsigned char)69;
unsigned short var_6 = (unsigned short)9741;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)-97;
unsigned int var_15 = 313828481U;
int zero = 0;
int var_20 = -1458300768;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2121359170U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
