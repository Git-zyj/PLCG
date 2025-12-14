#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
unsigned short var_3 = (unsigned short)64996;
unsigned long long int var_5 = 15383203025597949538ULL;
_Bool var_8 = (_Bool)0;
long long int var_10 = 6974283611300251375LL;
int zero = 0;
long long int var_12 = 5793509348722029731LL;
int var_13 = 1227534671;
signed char var_14 = (signed char)59;
unsigned char var_15 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
