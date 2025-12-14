#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)139;
short var_5 = (short)-6002;
long long int var_6 = 1848519346026241255LL;
long long int var_8 = 9119313549195400115LL;
int var_10 = -403343094;
unsigned long long int var_11 = 17973896591106657949ULL;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned char var_18 = (unsigned char)114;
int zero = 0;
unsigned int var_19 = 2225028212U;
short var_20 = (short)3031;
short var_21 = (short)-10519;
short var_22 = (short)9446;
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
