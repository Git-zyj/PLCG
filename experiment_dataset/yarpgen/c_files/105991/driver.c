#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_4 = (short)4274;
unsigned int var_5 = 782203379U;
long long int var_8 = -6551551324275063873LL;
signed char var_9 = (signed char)-68;
unsigned char var_10 = (unsigned char)54;
signed char var_14 = (signed char)12;
long long int var_17 = -5198759531589374845LL;
int zero = 0;
int var_18 = 1888943865;
signed char var_19 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
