#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_7 = (unsigned char)65;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)114;
unsigned long long int var_20 = 13489923868639647594ULL;
unsigned long long int var_21 = 15710260356147702995ULL;
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
