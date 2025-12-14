#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
unsigned char var_1 = (unsigned char)201;
short var_3 = (short)-8151;
unsigned long long int var_4 = 3668884569511328656ULL;
long long int var_6 = -5521817121637649047LL;
short var_8 = (short)-6905;
signed char var_9 = (signed char)29;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-42;
long long int var_12 = -3400165035158490446LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
