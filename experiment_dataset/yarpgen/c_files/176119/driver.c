#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 508401345U;
short var_2 = (short)-2516;
signed char var_3 = (signed char)-47;
int var_5 = 511896262;
long long int var_7 = 6133238956644946186LL;
short var_8 = (short)-10210;
unsigned char var_9 = (unsigned char)174;
short var_10 = (short)-18396;
unsigned long long int var_11 = 5082967254657786744ULL;
unsigned long long int var_12 = 3018182131931408699ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)5661;
short var_15 = (short)-18559;
unsigned char var_18 = (unsigned char)166;
int zero = 0;
short var_19 = (short)-1824;
unsigned long long int var_20 = 9312021642125362573ULL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)118;
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
