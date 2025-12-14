#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2675746832503233079LL;
long long int var_4 = -763762069400724549LL;
unsigned long long int var_5 = 2799654137910494242ULL;
long long int var_6 = 7775059346125536694LL;
signed char var_7 = (signed char)-47;
long long int var_8 = 477948723364249079LL;
long long int var_9 = 781174171547903539LL;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)22672;
int var_14 = -1009616825;
unsigned char var_15 = (unsigned char)201;
unsigned short var_17 = (unsigned short)38693;
unsigned long long int var_18 = 4818185254517166394ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 7036620608403523436ULL;
unsigned short var_21 = (unsigned short)2705;
int var_22 = -1060839657;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 2328130332U;
int arr_2 [19] [19] ;
unsigned long long int arr_12 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 1209943067;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 18322841349861052387ULL : 14542927472706816982ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
