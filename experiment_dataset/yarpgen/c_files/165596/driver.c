#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2932698149U;
signed char var_2 = (signed char)2;
int var_3 = -1383518099;
int var_4 = -738592273;
long long int var_5 = -7788860928159950290LL;
unsigned short var_6 = (unsigned short)44056;
long long int var_10 = -6666068021828029259LL;
int var_11 = -952725261;
unsigned short var_14 = (unsigned short)4899;
int zero = 0;
int var_16 = -466047664;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5790542793624680092LL;
unsigned int var_19 = 2467477382U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
