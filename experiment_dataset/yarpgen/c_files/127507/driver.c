#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2895;
int var_6 = 1793514944;
unsigned int var_8 = 2754152177U;
int var_11 = 515795591;
unsigned short var_13 = (unsigned short)55220;
unsigned long long int var_16 = 18154314692845863759ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)50208;
_Bool var_18 = (_Bool)0;
int var_19 = -1043750248;
unsigned long long int var_20 = 16759355424372647401ULL;
long long int var_21 = 610108318487366667LL;
unsigned long long int arr_1 [19] [19] ;
_Bool arr_2 [19] ;
unsigned int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 11903470709416535666ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 518301292U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
