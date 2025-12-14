#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 832580845;
unsigned short var_1 = (unsigned short)44312;
long long int var_3 = 7761745400972836118LL;
short var_5 = (short)-6417;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)55021;
short var_12 = (short)7922;
short var_13 = (short)-17549;
unsigned int var_14 = 136343211U;
int var_15 = -8139951;
int zero = 0;
unsigned char var_20 = (unsigned char)87;
short var_21 = (short)-5889;
int var_22 = -1596655681;
unsigned short var_23 = (unsigned short)51999;
_Bool var_24 = (_Bool)0;
long long int var_25 = -8013364986809217872LL;
unsigned short var_26 = (unsigned short)60248;
unsigned short var_27 = (unsigned short)8908;
unsigned int var_28 = 4144056184U;
short var_29 = (short)-9996;
long long int var_30 = 8392175418320584258LL;
long long int var_31 = 3192279760667922506LL;
long long int var_32 = 5297065496078956744LL;
int arr_0 [16] [16] ;
unsigned short arr_1 [16] [16] ;
short arr_2 [20] [20] ;
unsigned int arr_3 [20] ;
unsigned int arr_4 [20] [20] ;
unsigned int arr_5 [10] ;
_Bool arr_6 [10] [10] ;
short arr_7 [14] ;
unsigned int arr_8 [14] [14] ;
unsigned int arr_9 [14] ;
signed char arr_10 [14] ;
long long int arr_13 [24] ;
long long int arr_14 [24] ;
unsigned long long int arr_15 [24] [24] [24] ;
unsigned char arr_16 [24] [24] [24] ;
_Bool arr_11 [14] ;
int arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -787368024;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)18019 : (unsigned short)6349;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-9042;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 2049603161U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 794572491U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 2223939905U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (short)-12907;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 2212968850U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 3161871092U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 6953690066244589858LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = 4588488974158093024LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 15103333919452535865ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = -754045194;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
