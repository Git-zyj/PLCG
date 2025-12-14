#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14884;
long long int var_2 = 4061186197894324220LL;
_Bool var_8 = (_Bool)0;
long long int var_11 = -4871727724098715768LL;
int zero = 0;
unsigned long long int var_15 = 2916954285589757770ULL;
unsigned long long int var_16 = 18143673853625871408ULL;
signed char var_17 = (signed char)-65;
int var_18 = 554643028;
int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -1375037481;
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
