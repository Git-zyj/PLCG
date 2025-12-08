#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned int var_4 = 2204850310U;
long long int var_11 = 3307068931313445375LL;
int var_12 = -676435694;
unsigned long long int var_17 = 7930819723541756114ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)24336;
unsigned char var_21 = (unsigned char)18;
unsigned long long int var_22 = 12781305095328934089ULL;
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
