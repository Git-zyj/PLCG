#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4967198656937910890LL;
unsigned long long int var_3 = 7287415703556180014ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)2318;
signed char var_10 = (signed char)-16;
unsigned long long int var_12 = 2251699827868665039ULL;
int zero = 0;
signed char var_19 = (signed char)42;
unsigned long long int var_20 = 5806076447902978543ULL;
unsigned short var_21 = (unsigned short)36360;
int var_22 = 182609737;
unsigned long long int var_23 = 7172889520154664495ULL;
long long int arr_0 [25] [25] ;
int arr_1 [25] ;
long long int arr_2 [25] ;
unsigned int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1170508710722811698LL : 6722112162151270355LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 61059727 : -2087283415;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -3817233258688968670LL : -8320544631144871092LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 1142525516U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
