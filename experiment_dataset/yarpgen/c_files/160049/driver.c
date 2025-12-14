#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11498873248375145700ULL;
unsigned long long int var_4 = 7327878630848021441ULL;
short var_7 = (short)-16076;
short var_14 = (short)16113;
_Bool var_15 = (_Bool)0;
int var_16 = 1653519928;
int zero = 0;
unsigned int var_19 = 2196500536U;
unsigned char var_20 = (unsigned char)138;
void init() {
}

void checksum() {
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
