#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3171487527067877894LL;
signed char var_5 = (signed char)-43;
unsigned char var_8 = (unsigned char)250;
int var_10 = -1599894117;
int zero = 0;
unsigned short var_11 = (unsigned short)21590;
int var_12 = -331462530;
unsigned short var_13 = (unsigned short)7901;
void init() {
}

void checksum() {
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
