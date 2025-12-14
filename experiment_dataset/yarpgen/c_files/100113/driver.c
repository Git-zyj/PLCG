#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 18345692604688556610ULL;
long long int var_2 = 8501061251208078019LL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_7 = 5658290873990778535LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -8673564371473000886LL;
long long int var_11 = -3750901004940818719LL;
unsigned long long int var_13 = 16081356015404242508ULL;
long long int var_15 = -6614576837907337291LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7153691158978629409LL;
unsigned long long int var_19 = 15112106142564172206ULL;
unsigned long long int var_20 = 10794841580773991912ULL;
unsigned long long int var_21 = 16524739502533638894ULL;
_Bool var_22 = (_Bool)0;
_Bool arr_0 [11] ;
unsigned long long int arr_1 [11] [11] ;
_Bool arr_2 [11] [11] ;
unsigned long long int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 8528063597937817285ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 9388774486958635190ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
