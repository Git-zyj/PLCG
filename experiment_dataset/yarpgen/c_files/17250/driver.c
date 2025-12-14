#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1993104807;
unsigned int var_1 = 188251302U;
int var_2 = -528774134;
unsigned short var_4 = (unsigned short)9151;
unsigned short var_8 = (unsigned short)54366;
short var_14 = (short)172;
unsigned short var_15 = (unsigned short)36744;
int zero = 0;
unsigned short var_17 = (unsigned short)28530;
unsigned char var_18 = (unsigned char)208;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)44352;
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
