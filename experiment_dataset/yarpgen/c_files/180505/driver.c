#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)26;
_Bool var_3 = (_Bool)1;
int var_4 = -1249159425;
int var_5 = 336107221;
unsigned int var_6 = 1230741398U;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 2186727615U;
signed char var_12 = (signed char)-103;
short var_16 = (short)29278;
int zero = 0;
unsigned int var_17 = 2624986849U;
short var_18 = (short)-21561;
long long int var_19 = 6916888163482593798LL;
int var_20 = -527947501;
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
