#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
long long int var_1 = -5767696645951747846LL;
signed char var_2 = (signed char)75;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)236;
long long int var_11 = -1710159956227789359LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 11988266415060919304ULL;
unsigned short var_20 = (unsigned short)32182;
unsigned char var_21 = (unsigned char)230;
unsigned long long int var_22 = 3947327602580558342ULL;
signed char var_23 = (signed char)117;
long long int var_24 = -8142988695008309236LL;
unsigned short var_25 = (unsigned short)29967;
long long int var_26 = 1877003788979754152LL;
_Bool var_27 = (_Bool)0;
unsigned char arr_0 [24] ;
int arr_1 [24] ;
short arr_2 [24] ;
signed char arr_3 [24] ;
long long int arr_5 [24] [24] [24] ;
unsigned short arr_6 [24] [24] ;
short arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1726278800;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-3490;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1473898529911928854LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)5083;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (short)3585;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
