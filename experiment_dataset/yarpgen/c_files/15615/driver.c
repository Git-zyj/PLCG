#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19512;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-31294;
int var_5 = 1000829346;
unsigned int var_7 = 998910209U;
long long int var_9 = -3032774536319982149LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)37770;
long long int var_18 = -4059711844282672951LL;
long long int var_19 = 2764113609908567634LL;
long long int var_20 = -8425644726628236550LL;
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
