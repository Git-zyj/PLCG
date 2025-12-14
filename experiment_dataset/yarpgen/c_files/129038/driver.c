#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9083113020624110566ULL;
unsigned short var_1 = (unsigned short)25542;
unsigned short var_3 = (unsigned short)40879;
unsigned char var_5 = (unsigned char)229;
int var_6 = 1688025281;
long long int var_9 = -464451294154043477LL;
unsigned char var_10 = (unsigned char)211;
int var_12 = -27336245;
int var_13 = 44577545;
int zero = 0;
signed char var_15 = (signed char)-15;
long long int var_16 = -2704084835143070218LL;
unsigned int var_17 = 3724469451U;
unsigned int var_18 = 110058484U;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 6771868319191761085ULL;
unsigned long long int var_21 = 7531446081066732252ULL;
short var_22 = (short)18332;
int var_23 = 993806250;
signed char var_24 = (signed char)-97;
unsigned int var_25 = 1477221855U;
int var_26 = 210567254;
long long int var_27 = 8319247835756526527LL;
int var_28 = -1721838806;
int var_29 = -417938564;
long long int arr_0 [18] ;
signed char arr_1 [18] ;
unsigned int arr_2 [18] ;
signed char arr_3 [18] [18] ;
int arr_5 [18] ;
int arr_6 [18] [18] ;
unsigned char arr_7 [18] ;
unsigned long long int arr_8 [18] ;
signed char arr_9 [18] [18] ;
long long int arr_10 [18] [18] ;
int arr_11 [18] [18] [18] ;
unsigned long long int arr_12 [18] [18] [18] [18] ;
signed char arr_13 [18] [18] [18] ;
unsigned int arr_14 [18] [18] ;
unsigned int arr_4 [18] [18] ;
unsigned char arr_15 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -4089461310970618052LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3198585926U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 1360296451;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 88484320;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)96 : (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 16812595470760391844ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 1209261896787891586LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2077460136 : -1608287386;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 5607545217008226720ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = 3916143650U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 4264715129U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)202 : (unsigned char)108;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
