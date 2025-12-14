#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2058322008141070790ULL;
unsigned int var_3 = 4241482578U;
unsigned short var_4 = (unsigned short)13008;
int var_6 = 131040646;
unsigned short var_7 = (unsigned short)38352;
long long int var_8 = -7041237487305351950LL;
long long int var_16 = 2548447387514510851LL;
int zero = 0;
signed char var_19 = (signed char)61;
unsigned long long int var_20 = 1568994887643020799ULL;
int var_21 = -608020023;
unsigned short var_22 = (unsigned short)62193;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
