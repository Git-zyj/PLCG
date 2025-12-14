#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-57;
short var_5 = (short)11299;
unsigned char var_7 = (unsigned char)101;
int var_10 = 262838320;
int zero = 0;
int var_11 = -1720239745;
long long int var_12 = -6334110036655121071LL;
unsigned short var_13 = (unsigned short)21943;
long long int var_14 = 8596211715747572730LL;
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
