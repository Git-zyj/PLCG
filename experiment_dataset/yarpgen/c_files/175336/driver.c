#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
signed char var_3 = (signed char)-85;
signed char var_6 = (signed char)70;
unsigned char var_7 = (unsigned char)45;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)220;
long long int var_11 = 2744896797322274633LL;
int zero = 0;
long long int var_12 = -1793043044421159097LL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)94;
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
