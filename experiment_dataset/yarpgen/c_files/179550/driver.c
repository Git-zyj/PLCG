#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -201380956;
unsigned long long int var_1 = 8010769183243237613ULL;
unsigned int var_3 = 2497612829U;
long long int var_5 = -6905000796396742784LL;
unsigned char var_6 = (unsigned char)202;
long long int var_7 = -641083532654074898LL;
int var_8 = -118856848;
_Bool var_9 = (_Bool)1;
unsigned short var_14 = (unsigned short)766;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)86;
int var_18 = 762164181;
long long int var_19 = 7683171441891643151LL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)40785;
unsigned int var_22 = 2752870013U;
unsigned short var_23 = (unsigned short)60089;
short arr_0 [14] [14] ;
unsigned long long int arr_3 [14] ;
unsigned long long int arr_4 [14] [14] [14] [14] ;
unsigned int arr_5 [14] [14] [14] [14] ;
int arr_9 [16] ;
int arr_6 [14] ;
short arr_13 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)29745;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1339656440989474147ULL : 14663355310592595707ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 18249685123730526549ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 40022695U : 805246371U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 534308904;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1053010535 : -1098110839;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-28924;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
