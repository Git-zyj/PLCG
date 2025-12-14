#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1331242709;
unsigned char var_8 = (unsigned char)191;
unsigned int var_10 = 1044283757U;
int var_12 = -102179287;
int var_13 = 394844459;
signed char var_14 = (signed char)-44;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)211;
int var_22 = -182439998;
unsigned long long int var_23 = 2441651679985283466ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
