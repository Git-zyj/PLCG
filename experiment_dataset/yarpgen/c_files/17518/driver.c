#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
short var_1 = (short)2868;
short var_2 = (short)24684;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-6800;
long long int var_6 = -1142754281494707085LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 13758904142228955346ULL;
long long int var_14 = 7155056849403451592LL;
unsigned int var_15 = 2430536861U;
unsigned short var_17 = (unsigned short)4453;
short var_18 = (short)26189;
int zero = 0;
unsigned int var_20 = 418348774U;
unsigned int var_21 = 1380673789U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
