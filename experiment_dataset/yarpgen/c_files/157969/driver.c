#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2230941863U;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)229;
unsigned char var_6 = (unsigned char)69;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int var_13 = -608374363;
unsigned char var_14 = (unsigned char)102;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
int var_22 = 634010030;
void init() {
}

void checksum() {
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
