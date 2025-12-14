#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-61;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 15207922002078411245ULL;
unsigned int var_8 = 1572133546U;
int zero = 0;
unsigned char var_10 = (unsigned char)131;
unsigned long long int var_11 = 8588358085397660810ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
