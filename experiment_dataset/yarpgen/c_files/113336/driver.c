#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3651950817U;
unsigned char var_2 = (unsigned char)235;
signed char var_3 = (signed char)6;
int var_10 = -1423936597;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)-92;
unsigned int var_18 = 3106338317U;
int zero = 0;
int var_19 = 1655583550;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
int var_22 = 1557117608;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
