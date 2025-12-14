#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 292046396U;
unsigned short var_1 = (unsigned short)38924;
long long int var_2 = -6609714154305728602LL;
signed char var_3 = (signed char)-42;
unsigned short var_4 = (unsigned short)50275;
_Bool var_5 = (_Bool)1;
int var_6 = -1185082797;
short var_8 = (short)-5294;
signed char var_9 = (signed char)-38;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)148;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)12;
unsigned char var_15 = (unsigned char)162;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)16847;
int var_18 = -702326614;
unsigned long long int var_19 = 4447461493211433554ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)172;
int var_21 = -2142382685;
signed char var_22 = (signed char)-118;
int var_23 = -156815540;
unsigned short var_24 = (unsigned short)34738;
unsigned char var_25 = (unsigned char)243;
unsigned short var_26 = (unsigned short)57312;
long long int var_27 = 2521404294320448752LL;
unsigned short var_28 = (unsigned short)43724;
short var_29 = (short)7465;
unsigned char arr_4 [24] ;
int arr_5 [24] [24] ;
long long int arr_6 [24] [24] [24] ;
int arr_12 [24] [24] [24] [24] ;
int arr_8 [24] [24] ;
unsigned long long int arr_13 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 265239497;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2762840740553193718LL : 947339016083257190LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 707706692;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -1593219312 : 2060596743;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 10605403073875413543ULL : 3500598112622747329ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
