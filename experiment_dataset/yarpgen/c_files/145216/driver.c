#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50451;
unsigned char var_3 = (unsigned char)96;
unsigned short var_6 = (unsigned short)5228;
unsigned short var_13 = (unsigned short)15381;
int zero = 0;
unsigned short var_14 = (unsigned short)53129;
unsigned char var_15 = (unsigned char)69;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)62563;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
