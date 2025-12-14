#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6778231670051070016LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 12093195472284309248ULL;
unsigned short var_8 = (unsigned short)52852;
int zero = 0;
unsigned char var_12 = (unsigned char)62;
unsigned short var_13 = (unsigned short)33159;
void init() {
}

void checksum() {
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
