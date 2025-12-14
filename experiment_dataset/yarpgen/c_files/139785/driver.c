#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15864;
unsigned short var_2 = (unsigned short)62178;
unsigned short var_3 = (unsigned short)22989;
unsigned short var_4 = (unsigned short)13096;
unsigned short var_10 = (unsigned short)18153;
int zero = 0;
unsigned short var_13 = (unsigned short)40718;
unsigned short var_14 = (unsigned short)3923;
unsigned short var_15 = (unsigned short)32051;
unsigned short var_16 = (unsigned short)65124;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
