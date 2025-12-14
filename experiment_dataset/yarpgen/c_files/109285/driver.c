#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1871973373U;
unsigned long long int var_3 = 15931711704614587208ULL;
unsigned int var_6 = 1194758205U;
long long int var_8 = -7808175319110808410LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)81;
unsigned char var_11 = (unsigned char)157;
unsigned char var_13 = (unsigned char)94;
signed char var_14 = (signed char)126;
signed char var_16 = (signed char)112;
int zero = 0;
long long int var_20 = 255551798037328635LL;
short var_21 = (short)3305;
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
