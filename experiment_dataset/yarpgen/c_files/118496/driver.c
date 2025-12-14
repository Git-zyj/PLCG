#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2071944065U;
unsigned long long int var_4 = 1103673201815853247ULL;
int var_6 = -1422612495;
unsigned int var_9 = 181670171U;
short var_10 = (short)-22839;
unsigned short var_13 = (unsigned short)50671;
int var_14 = 1896027552;
int zero = 0;
signed char var_16 = (signed char)5;
_Bool var_17 = (_Bool)0;
short var_18 = (short)22241;
int var_19 = 1861354926;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
