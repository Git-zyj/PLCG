#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)140;
unsigned int var_4 = 2113669173U;
signed char var_5 = (signed char)50;
int var_6 = 655594250;
int var_8 = -1972200847;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)139;
unsigned int var_11 = 1096969679U;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)36045;
long long int var_14 = -5428661674073372243LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
