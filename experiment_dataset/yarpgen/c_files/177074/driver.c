#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -749703739;
unsigned char var_3 = (unsigned char)127;
unsigned char var_4 = (unsigned char)37;
long long int var_5 = 3664799210437439020LL;
_Bool var_7 = (_Bool)0;
long long int var_9 = 1039271021652132695LL;
_Bool var_10 = (_Bool)1;
int var_12 = 620952852;
unsigned int var_13 = 39194740U;
unsigned char var_14 = (unsigned char)107;
unsigned int var_15 = 507794573U;
short var_16 = (short)26172;
unsigned int var_18 = 3767327991U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 9835286546581230541ULL;
unsigned short var_21 = (unsigned short)39177;
unsigned short var_22 = (unsigned short)34112;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
