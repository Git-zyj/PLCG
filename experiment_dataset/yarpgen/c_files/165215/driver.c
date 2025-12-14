#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3202216834U;
unsigned char var_1 = (unsigned char)96;
short var_4 = (short)-27433;
unsigned long long int var_6 = 12006800607498298623ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-20454;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 1125039244U;
unsigned char var_14 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
