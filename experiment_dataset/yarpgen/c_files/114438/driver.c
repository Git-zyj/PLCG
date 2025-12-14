#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1415054357;
unsigned short var_3 = (unsigned short)28123;
unsigned long long int var_5 = 6202592702762294165ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 3328840858U;
unsigned int var_17 = 2549927699U;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)31;
_Bool var_20 = (_Bool)1;
int var_21 = 471728150;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
