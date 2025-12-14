#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 76571698;
unsigned short var_5 = (unsigned short)3071;
unsigned short var_11 = (unsigned short)8952;
int zero = 0;
unsigned long long int var_14 = 1530554762827691882ULL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)254;
unsigned short var_17 = (unsigned short)60734;
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
