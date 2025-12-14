#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -854149976;
unsigned int var_3 = 1014938988U;
unsigned int var_5 = 558805338U;
unsigned short var_6 = (unsigned short)37534;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 982287257U;
unsigned short var_9 = (unsigned short)1147;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_13 = 71860360495271342LL;
long long int var_14 = -347219736572240507LL;
unsigned short var_15 = (unsigned short)28087;
int var_16 = -205787304;
long long int var_17 = 8271895857999293884LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
