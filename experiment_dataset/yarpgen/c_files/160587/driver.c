#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3367858811U;
unsigned long long int var_2 = 2864347273207136664ULL;
long long int var_3 = -6643439480737280241LL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1601688305U;
short var_7 = (short)3484;
unsigned long long int var_8 = 13905005335699557715ULL;
unsigned short var_9 = (unsigned short)12523;
int zero = 0;
long long int var_10 = -1254901227325411022LL;
signed char var_11 = (signed char)16;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
