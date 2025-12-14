#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
unsigned char var_4 = (unsigned char)70;
unsigned long long int var_7 = 13923571752318991564ULL;
unsigned char var_8 = (unsigned char)254;
signed char var_12 = (signed char)-29;
_Bool var_14 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)84;
int var_19 = -46809888;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
