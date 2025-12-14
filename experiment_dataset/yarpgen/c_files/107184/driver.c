#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
signed char var_1 = (signed char)120;
signed char var_3 = (signed char)-35;
_Bool var_4 = (_Bool)1;
signed char var_10 = (signed char)37;
int var_12 = 1053188907;
unsigned long long int var_14 = 6520303639267048413ULL;
signed char var_15 = (signed char)-53;
unsigned int var_16 = 3034913973U;
int zero = 0;
unsigned int var_17 = 2235676683U;
signed char var_18 = (signed char)14;
signed char var_19 = (signed char)21;
int var_20 = -1573882426;
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
