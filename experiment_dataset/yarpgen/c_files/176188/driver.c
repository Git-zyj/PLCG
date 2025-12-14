#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
unsigned char var_1 = (unsigned char)144;
unsigned char var_6 = (unsigned char)165;
long long int var_7 = 4757376302831974806LL;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)166;
unsigned short var_16 = (unsigned short)13938;
int zero = 0;
int var_19 = 1017246979;
unsigned char var_20 = (unsigned char)39;
signed char var_21 = (signed char)102;
int var_22 = 543241990;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
