#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 28337084;
short var_2 = (short)31536;
long long int var_3 = -7462323220078939296LL;
unsigned int var_5 = 1892111919U;
int var_6 = 820013917;
signed char var_8 = (signed char)100;
int zero = 0;
signed char var_10 = (signed char)-10;
signed char var_11 = (signed char)3;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
