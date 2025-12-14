#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 916452953U;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 3613527024U;
unsigned short var_9 = (unsigned short)59208;
unsigned short var_13 = (unsigned short)51642;
unsigned int var_14 = 300243587U;
unsigned short var_15 = (unsigned short)48695;
unsigned short var_16 = (unsigned short)13734;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)46489;
unsigned long long int var_20 = 8964739566624025245ULL;
unsigned long long int var_21 = 12712953683661327250ULL;
void init() {
}

void checksum() {
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
