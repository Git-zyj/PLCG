#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8368;
unsigned int var_5 = 1109191450U;
unsigned long long int var_7 = 6323035952787718830ULL;
signed char var_8 = (signed char)88;
signed char var_10 = (signed char)9;
unsigned short var_12 = (unsigned short)57101;
_Bool var_13 = (_Bool)1;
long long int var_16 = 6856798724827635256LL;
int zero = 0;
int var_17 = -32877848;
short var_18 = (short)-7975;
unsigned long long int var_19 = 5644211078782853407ULL;
void init() {
}

void checksum() {
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
