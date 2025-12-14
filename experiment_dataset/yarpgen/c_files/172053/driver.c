#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -684474794;
unsigned int var_1 = 4033276296U;
unsigned char var_3 = (unsigned char)91;
int var_5 = -2070952570;
unsigned int var_6 = 2540297298U;
unsigned short var_7 = (unsigned short)61456;
unsigned char var_8 = (unsigned char)201;
int zero = 0;
unsigned char var_10 = (unsigned char)180;
unsigned char var_11 = (unsigned char)170;
long long int var_12 = -6085731115500213513LL;
unsigned short var_13 = (unsigned short)4462;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
