#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2771571786948203798ULL;
signed char var_3 = (signed char)-40;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)50;
int var_10 = 1179449062;
short var_14 = (short)27171;
int zero = 0;
unsigned short var_15 = (unsigned short)52878;
unsigned short var_16 = (unsigned short)35067;
int var_17 = 945804912;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
