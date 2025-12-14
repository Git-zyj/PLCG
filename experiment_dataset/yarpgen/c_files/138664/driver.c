#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2569092188U;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)41589;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-3707;
unsigned char var_12 = (unsigned char)187;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)6561;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
