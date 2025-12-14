#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 116442242U;
_Bool var_3 = (_Bool)0;
long long int var_4 = -1571275358667100738LL;
long long int var_7 = 7465240358201951717LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = -7152408056848346823LL;
unsigned int var_11 = 1231984773U;
unsigned int var_12 = 3609719652U;
unsigned short var_13 = (unsigned short)57963;
unsigned long long int var_14 = 9930778834257305549ULL;
unsigned long long int var_15 = 17756429229002376062ULL;
unsigned short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)17450;
}

void checksum() {
    hash(&seed, var_10);
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
