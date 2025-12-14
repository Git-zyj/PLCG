#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7604143024615573901ULL;
long long int var_5 = 3291193009829640027LL;
unsigned long long int var_7 = 16710295175262687244ULL;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int var_15 = 1506219425;
int var_17 = 1329019335;
int zero = 0;
int var_20 = 1365413116;
unsigned char var_21 = (unsigned char)49;
int var_22 = 191743148;
int var_23 = 1121048019;
long long int var_24 = 7893482406938302244LL;
unsigned char var_25 = (unsigned char)172;
unsigned short var_26 = (unsigned short)8792;
unsigned short var_27 = (unsigned short)26627;
int var_28 = -3755250;
unsigned long long int arr_1 [13] [13] ;
unsigned short arr_4 [22] ;
unsigned int arr_7 [19] ;
unsigned long long int arr_8 [19] [19] ;
int arr_9 [19] ;
unsigned char arr_2 [13] [13] ;
long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 14740964512866839492ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)5232;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 2919829445U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 8097307699181196472ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 1850411816;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 967763304919675955LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
