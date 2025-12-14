#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2659;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 3159066572399996979ULL;
signed char var_7 = (signed char)-119;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 6790198464395434670ULL;
unsigned long long int var_12 = 9203238342353356862ULL;
unsigned int var_14 = 3408833423U;
int zero = 0;
short var_16 = (short)21085;
short var_17 = (short)-20294;
unsigned long long int var_18 = 15290697839440196036ULL;
int var_19 = -638326630;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
