#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2991555497545768850LL;
unsigned long long int var_6 = 16117683500355920221ULL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-35;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)62004;
int zero = 0;
unsigned char var_19 = (unsigned char)165;
unsigned long long int var_20 = 10851391976066864343ULL;
unsigned int var_21 = 1150512507U;
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
