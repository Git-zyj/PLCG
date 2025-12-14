#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1980223108;
long long int var_5 = 874422219487676918LL;
unsigned int var_6 = 2156042099U;
unsigned int var_8 = 1519450629U;
long long int var_9 = -6029596043788917926LL;
unsigned int var_10 = 3636203899U;
int zero = 0;
unsigned short var_12 = (unsigned short)62315;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)211;
long long int var_15 = 3486038544978736794LL;
unsigned long long int arr_0 [20] [20] ;
unsigned long long int arr_2 [20] ;
int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 10056253792497793512ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 11242489929839839426ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -165511312;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
