#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 494043401;
short var_1 = (short)-13473;
unsigned short var_2 = (unsigned short)63108;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)43;
unsigned short var_5 = (unsigned short)13450;
unsigned short var_6 = (unsigned short)51177;
signed char var_7 = (signed char)-15;
_Bool var_9 = (_Bool)0;
short var_10 = (short)19926;
unsigned int var_11 = 4021685427U;
unsigned int var_12 = 361049702U;
unsigned char var_13 = (unsigned char)126;
short var_14 = (short)-19150;
short var_15 = (short)-32230;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-29259;
short var_18 = (short)-18523;
long long int var_19 = 9173825217080228980LL;
short var_20 = (short)-14676;
long long int var_21 = -6611115711929292791LL;
unsigned int arr_2 [12] [12] ;
short arr_4 [22] ;
unsigned long long int arr_5 [22] ;
int arr_10 [24] [24] ;
int arr_11 [24] ;
signed char arr_6 [22] ;
signed char arr_9 [18] ;
unsigned long long int arr_12 [24] ;
long long int arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 948965321U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)5863 : (short)30856;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 372344684006395278ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 211358721;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = -1151912773;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-13 : (signed char)71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-21 : (signed char)98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 14397127913464169345ULL : 10295253481121050650ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -6153489054615554653LL : -2181438573897922326LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
