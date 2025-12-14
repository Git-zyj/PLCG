#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 312494949;
unsigned int var_2 = 365276917U;
long long int var_4 = 2517647900407129695LL;
unsigned char var_5 = (unsigned char)41;
unsigned short var_8 = (unsigned short)10835;
int var_18 = 384057703;
int zero = 0;
int var_20 = -971565884;
signed char var_21 = (signed char)15;
short var_22 = (short)32423;
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
