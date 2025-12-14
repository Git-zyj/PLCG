#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7706;
unsigned char var_3 = (unsigned char)192;
long long int var_4 = 5236421916445556731LL;
int var_5 = -1026906239;
unsigned short var_6 = (unsigned short)36476;
unsigned char var_7 = (unsigned char)126;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)104;
int zero = 0;
long long int var_10 = 8217501789621403802LL;
unsigned int var_11 = 150582978U;
long long int var_12 = -1847018756257151071LL;
unsigned short var_13 = (unsigned short)60742;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
