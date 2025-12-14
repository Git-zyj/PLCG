#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54461;
unsigned short var_2 = (unsigned short)59347;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)44;
short var_5 = (short)-11682;
short var_6 = (short)976;
long long int var_7 = -2807217343022025548LL;
unsigned long long int var_11 = 5175919430543423062ULL;
unsigned short var_15 = (unsigned short)44777;
unsigned short var_16 = (unsigned short)18776;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-12195;
short var_19 = (short)7633;
unsigned long long int var_20 = 12355703146258567309ULL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)7805;
short var_23 = (short)-28402;
short arr_1 [16] [16] ;
unsigned long long int arr_3 [16] ;
short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)18732;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 13316047776739642765ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)-22101;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
