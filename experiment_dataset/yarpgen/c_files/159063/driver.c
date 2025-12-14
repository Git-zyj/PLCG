#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12744;
unsigned int var_1 = 3622074376U;
unsigned short var_5 = (unsigned short)7137;
unsigned long long int var_7 = 13591572677024811685ULL;
long long int var_8 = -640388901019610534LL;
int zero = 0;
unsigned int var_12 = 1756740102U;
int var_13 = 1464498071;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
