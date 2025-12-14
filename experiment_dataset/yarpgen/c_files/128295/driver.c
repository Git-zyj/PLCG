#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)201;
unsigned long long int var_2 = 7548083206395490608ULL;
unsigned char var_6 = (unsigned char)70;
unsigned int var_8 = 3526975651U;
unsigned short var_10 = (unsigned short)5956;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 13738225690077941381ULL;
unsigned char var_13 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
