#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14792;
unsigned short var_5 = (unsigned short)35903;
unsigned long long int var_10 = 4265729589002010044ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 1784295622296576322ULL;
long long int var_13 = -216108660302918369LL;
int zero = 0;
long long int var_14 = -7645814766863618839LL;
unsigned int var_15 = 2170150158U;
unsigned short var_16 = (unsigned short)57071;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
