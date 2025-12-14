#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2071578384;
unsigned int var_6 = 414984100U;
unsigned short var_7 = (unsigned short)40675;
unsigned short var_9 = (unsigned short)1865;
unsigned int var_10 = 3692381188U;
signed char var_12 = (signed char)-30;
_Bool var_13 = (_Bool)0;
long long int var_15 = -8780374769321439147LL;
unsigned char var_16 = (unsigned char)71;
int zero = 0;
unsigned int var_17 = 3357245221U;
unsigned int var_18 = 302805899U;
short var_19 = (short)20112;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 6111849018458502101ULL;
_Bool var_24 = (_Bool)0;
long long int var_25 = -9222770021355584966LL;
short var_26 = (short)-5732;
long long int var_27 = -893855435951409999LL;
unsigned int arr_0 [16] ;
unsigned int arr_1 [16] [16] ;
_Bool arr_3 [16] [16] ;
unsigned short arr_4 [16] [16] ;
long long int arr_6 [16] [16] [16] ;
unsigned char arr_8 [16] [16] ;
long long int arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 493814114U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 2542270497U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)46451;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -666913906370531039LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)216 : (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 4048484796042658967LL : -3162962152677737241LL;
}

void checksum() {
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
