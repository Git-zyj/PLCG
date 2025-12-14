#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1251450787U;
unsigned int var_9 = 1860007456U;
unsigned char var_11 = (unsigned char)207;
short var_13 = (short)26370;
long long int var_17 = -288393127733689006LL;
int zero = 0;
unsigned char var_19 = (unsigned char)0;
unsigned char var_20 = (unsigned char)89;
unsigned char var_21 = (unsigned char)140;
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
