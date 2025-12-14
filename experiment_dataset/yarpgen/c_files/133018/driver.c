#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -219168436;
int var_1 = -1207641949;
long long int var_3 = -1060804072612738183LL;
unsigned short var_4 = (unsigned short)53481;
long long int var_5 = -3467689875618087158LL;
int var_7 = 265319638;
long long int var_9 = -9188653978747978721LL;
_Bool var_14 = (_Bool)1;
long long int var_17 = 181003719415474022LL;
int zero = 0;
unsigned short var_18 = (unsigned short)49513;
int var_19 = 1740072334;
unsigned short var_20 = (unsigned short)64601;
int var_21 = -1272301006;
int var_22 = -1810657497;
long long int var_23 = 3970750099883936558LL;
unsigned short arr_0 [18] ;
long long int arr_2 [18] [18] [18] ;
_Bool arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)5971;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -5784616594955885325LL : -6901105541426918791LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
