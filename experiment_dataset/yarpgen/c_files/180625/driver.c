#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13989;
short var_1 = (short)-18868;
signed char var_3 = (signed char)76;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2327570030U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)236;
unsigned int var_9 = 2132364664U;
long long int var_10 = -185278953901937517LL;
long long int var_11 = -1175680637425876990LL;
unsigned int var_12 = 558758143U;
long long int var_13 = 7323841273185862994LL;
int zero = 0;
long long int var_15 = 6374661423590227611LL;
unsigned char var_16 = (unsigned char)147;
int var_17 = -1456758651;
signed char var_18 = (signed char)125;
unsigned char var_19 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
