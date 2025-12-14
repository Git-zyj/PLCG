#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17796789722780932714ULL;
_Bool var_1 = (_Bool)0;
short var_4 = (short)16363;
short var_5 = (short)-32517;
short var_6 = (short)-29018;
long long int var_10 = 3360555119852419419LL;
short var_12 = (short)-3201;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-74;
int zero = 0;
unsigned int var_17 = 587389254U;
signed char var_18 = (signed char)107;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
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
