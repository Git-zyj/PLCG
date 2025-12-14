#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -457084203;
signed char var_1 = (signed char)99;
int var_2 = 2002664575;
_Bool var_3 = (_Bool)1;
long long int var_5 = 5448761162460693047LL;
unsigned long long int var_8 = 2944068924450355973ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 16166825535938123539ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)57;
unsigned long long int var_19 = 15321082238073772111ULL;
unsigned short var_20 = (unsigned short)34126;
void init() {
}

void checksum() {
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
