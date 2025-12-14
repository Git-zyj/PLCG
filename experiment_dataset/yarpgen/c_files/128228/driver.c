#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23109;
short var_3 = (short)-11925;
int var_4 = 161067743;
unsigned short var_7 = (unsigned short)17704;
long long int var_8 = -8958404794265633085LL;
long long int var_9 = 6771320087531007847LL;
unsigned int var_10 = 80899400U;
unsigned int var_11 = 672872729U;
long long int var_13 = -2896843941537201621LL;
int zero = 0;
signed char var_14 = (signed char)-44;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1367878870U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
