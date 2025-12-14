#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)236;
unsigned char var_4 = (unsigned char)242;
unsigned long long int var_5 = 11634558502326496578ULL;
unsigned short var_7 = (unsigned short)11241;
short var_9 = (short)14497;
int zero = 0;
long long int var_11 = 2535361827473892675LL;
unsigned short var_12 = (unsigned short)13093;
signed char var_13 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
