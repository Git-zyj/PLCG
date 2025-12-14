#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned char var_1 = (unsigned char)97;
unsigned long long int var_3 = 10058546249793649254ULL;
signed char var_4 = (signed char)-1;
unsigned long long int var_5 = 14601915558386045221ULL;
signed char var_16 = (signed char)30;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14861364842346260827ULL;
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
