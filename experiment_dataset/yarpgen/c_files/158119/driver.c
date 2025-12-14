#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1748467114;
unsigned short var_1 = (unsigned short)31630;
_Bool var_3 = (_Bool)1;
int var_5 = -1972246589;
unsigned int var_11 = 2222269945U;
long long int var_14 = 8649441322443272131LL;
unsigned char var_15 = (unsigned char)234;
int zero = 0;
unsigned short var_19 = (unsigned short)60858;
signed char var_20 = (signed char)-45;
int var_21 = 1897418140;
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
