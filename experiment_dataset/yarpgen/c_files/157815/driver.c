#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42427;
unsigned int var_3 = 3230065044U;
unsigned int var_6 = 1060469319U;
unsigned int var_8 = 501930267U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3230083116U;
unsigned short var_20 = (unsigned short)47066;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2765596680U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
