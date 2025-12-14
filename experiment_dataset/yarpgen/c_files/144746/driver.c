#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)11430;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 254655823U;
unsigned short var_8 = (unsigned short)54873;
long long int var_9 = 6738896022492175334LL;
unsigned int var_11 = 3116624535U;
long long int var_14 = -1010984438772316781LL;
unsigned short var_16 = (unsigned short)29420;
int zero = 0;
long long int var_17 = -7467054347739303559LL;
long long int var_18 = 6017704149448230982LL;
unsigned int var_19 = 576519432U;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
