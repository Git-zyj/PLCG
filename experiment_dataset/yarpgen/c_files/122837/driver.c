#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3420840344424356060LL;
long long int var_5 = -7528565960801545926LL;
long long int var_7 = -7902893398386278995LL;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 3246075017U;
unsigned char var_14 = (unsigned char)104;
unsigned long long int var_15 = 13595685380892285078ULL;
unsigned char var_16 = (unsigned char)41;
unsigned char var_18 = (unsigned char)72;
int zero = 0;
int var_20 = -1066472623;
int var_21 = -1230623742;
void init() {
}

void checksum() {
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
