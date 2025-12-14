#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -385406766;
unsigned char var_1 = (unsigned char)41;
unsigned char var_2 = (unsigned char)155;
short var_3 = (short)-14650;
long long int var_4 = -994878164644909523LL;
short var_7 = (short)-4868;
signed char var_8 = (signed char)-39;
unsigned short var_9 = (unsigned short)12574;
long long int var_10 = -7440802974739687911LL;
unsigned int var_11 = 3861133977U;
unsigned int var_13 = 1021369259U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11370112653539264522ULL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-5451;
long long int var_19 = 5437850445565289200LL;
unsigned long long int var_20 = 12999692013799059514ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)17446;
int var_23 = -598076308;
short arr_0 [13] [13] ;
long long int arr_1 [13] ;
long long int arr_2 [13] [13] [13] ;
short arr_3 [13] [13] [13] ;
unsigned short arr_4 [13] [13] ;
short arr_5 [13] [13] ;
unsigned long long int arr_8 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_13 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-14093;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -7581640215917278203LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3797103837224940207LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-17430;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)9695;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-15429;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4038554994999765994ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 8352763515286189723ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
