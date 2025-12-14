#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
_Bool var_6 = (_Bool)1;
unsigned int var_10 = 533532461U;
unsigned char var_11 = (unsigned char)14;
_Bool var_14 = (_Bool)1;
unsigned int var_17 = 599633031U;
unsigned int var_18 = 4029230481U;
int zero = 0;
long long int var_19 = 3055976066278204216LL;
unsigned short var_20 = (unsigned short)41320;
unsigned long long int var_21 = 12508516831165132185ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
