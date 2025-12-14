#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17311697867045040392ULL;
long long int var_7 = -2939589734413533431LL;
int zero = 0;
unsigned char var_11 = (unsigned char)201;
unsigned char var_12 = (unsigned char)72;
signed char var_13 = (signed char)-79;
signed char var_14 = (signed char)-25;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
