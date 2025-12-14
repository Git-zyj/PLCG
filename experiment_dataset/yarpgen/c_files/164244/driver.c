#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)20;
unsigned char var_6 = (unsigned char)188;
unsigned char var_8 = (unsigned char)2;
unsigned long long int var_10 = 5336755969121462791ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)148;
int var_13 = 891052733;
unsigned char var_14 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
