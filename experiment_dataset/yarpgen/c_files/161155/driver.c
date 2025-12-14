#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 169253740U;
unsigned long long int var_3 = 16098430122572813044ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)152;
unsigned short var_9 = (unsigned short)37048;
int var_11 = 1230873928;
int var_12 = -1532503295;
unsigned int var_14 = 1151671397U;
unsigned char var_17 = (unsigned char)141;
int zero = 0;
int var_18 = 335025165;
long long int var_19 = -4180868427998241072LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
