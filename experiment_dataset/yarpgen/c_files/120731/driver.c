#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)15;
long long int var_2 = -2571586870245130088LL;
unsigned int var_4 = 474786675U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 9541804217204915373ULL;
long long int var_7 = 8445496859768833195LL;
long long int var_9 = 6690380270535416224LL;
unsigned long long int var_10 = 5517094401626774310ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 13557763222574507049ULL;
long long int var_13 = -306202329784488756LL;
int zero = 0;
unsigned long long int var_14 = 3625550100333427584ULL;
unsigned long long int var_15 = 10790378168427873193ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 847515382U;
void init() {
}

void checksum() {
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
