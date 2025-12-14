#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1037471630U;
unsigned char var_3 = (unsigned char)60;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 2597426754457605127ULL;
unsigned long long int var_6 = 14625153401962791261ULL;
signed char var_8 = (signed char)2;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3781020293U;
unsigned short var_11 = (unsigned short)54447;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 5202270762924510505LL;
void init() {
}

void checksum() {
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
