#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7000292392999008748ULL;
unsigned long long int var_3 = 1683360131359047812ULL;
long long int var_5 = 1088878590598042667LL;
unsigned int var_6 = 531076962U;
unsigned int var_7 = 2360031811U;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -999410020456016687LL;
int var_13 = -2105064707;
long long int var_14 = -5480969070488385060LL;
unsigned long long int var_15 = 8798503238186638974ULL;
signed char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)-19;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
