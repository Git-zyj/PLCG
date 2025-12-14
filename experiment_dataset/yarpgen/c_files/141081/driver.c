#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29995;
unsigned short var_2 = (unsigned short)15556;
unsigned int var_8 = 2321389695U;
unsigned char var_10 = (unsigned char)76;
unsigned char var_13 = (unsigned char)235;
short var_17 = (short)14936;
int zero = 0;
unsigned short var_20 = (unsigned short)6998;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)14589;
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
