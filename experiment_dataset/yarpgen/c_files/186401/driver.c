#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)25901;
short var_5 = (short)-5474;
long long int var_6 = -3909443248980231142LL;
unsigned char var_9 = (unsigned char)17;
unsigned int var_10 = 645052804U;
unsigned int var_12 = 896329732U;
int var_14 = -1983962650;
unsigned short var_16 = (unsigned short)15105;
int zero = 0;
long long int var_17 = 3044480255500438392LL;
_Bool var_18 = (_Bool)0;
int var_19 = -463464934;
signed char var_20 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
