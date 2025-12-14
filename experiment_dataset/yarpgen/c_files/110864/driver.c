#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 18387466027235186302ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)49664;
int zero = 0;
int var_20 = -1053862889;
unsigned int var_21 = 859104680U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
