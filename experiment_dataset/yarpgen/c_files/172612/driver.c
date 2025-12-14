#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
unsigned short var_2 = (unsigned short)13694;
long long int var_4 = -4479074313483037838LL;
int var_5 = -478793350;
unsigned short var_10 = (unsigned short)36769;
short var_15 = (short)17501;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 4052863200U;
unsigned char var_19 = (unsigned char)113;
long long int var_20 = -7854143255459225477LL;
void init() {
}

void checksum() {
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
