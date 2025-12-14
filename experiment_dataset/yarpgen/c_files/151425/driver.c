#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)1811;
unsigned char var_11 = (unsigned char)170;
unsigned char var_19 = (unsigned char)246;
int zero = 0;
unsigned long long int var_20 = 9226889861436191469ULL;
unsigned short var_21 = (unsigned short)35840;
long long int var_22 = 3636007594212310803LL;
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
