#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)183;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
long long int var_15 = 5852262509937552452LL;
int zero = 0;
long long int var_17 = 7426973917669140099LL;
unsigned short var_18 = (unsigned short)22421;
unsigned char var_19 = (unsigned char)200;
unsigned short var_20 = (unsigned short)30522;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
