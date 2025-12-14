#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3595561980U;
short var_1 = (short)11068;
unsigned int var_3 = 2726030332U;
unsigned short var_4 = (unsigned short)29133;
long long int var_5 = -2325790378125646235LL;
int var_7 = 1650476387;
int zero = 0;
unsigned char var_10 = (unsigned char)61;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
