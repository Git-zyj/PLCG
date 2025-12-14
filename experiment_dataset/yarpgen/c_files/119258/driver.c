#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)21595;
unsigned char var_8 = (unsigned char)50;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)254;
unsigned char var_16 = (unsigned char)50;
unsigned short var_17 = (unsigned short)58899;
unsigned short var_18 = (unsigned short)17261;
unsigned char var_19 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
