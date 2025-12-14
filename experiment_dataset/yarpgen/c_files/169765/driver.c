#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31264;
unsigned long long int var_2 = 6962825401221879385ULL;
signed char var_3 = (signed char)-58;
unsigned short var_4 = (unsigned short)9816;
int var_6 = 759656699;
int var_8 = 605611923;
unsigned short var_9 = (unsigned short)1266;
unsigned short var_10 = (unsigned short)46772;
signed char var_12 = (signed char)43;
unsigned long long int var_14 = 17612700239771205313ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 7763114353070278732ULL;
long long int var_19 = 4592967758861080365LL;
int var_20 = -1277145055;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-75;
signed char var_23 = (signed char)-62;
signed char var_24 = (signed char)8;
unsigned short var_25 = (unsigned short)59425;
short var_26 = (short)-26911;
long long int var_27 = -5099716914206200316LL;
unsigned short arr_3 [16] ;
signed char arr_6 [16] [16] [16] ;
unsigned short arr_9 [16] [16] ;
signed char arr_18 [17] ;
long long int arr_19 [17] ;
signed char arr_23 [23] [23] ;
unsigned long long int arr_24 [23] ;
unsigned short arr_25 [23] ;
unsigned long long int arr_27 [25] ;
unsigned int arr_7 [16] ;
signed char arr_8 [16] ;
long long int arr_12 [16] [16] [16] [16] ;
short arr_13 [16] [16] [16] ;
unsigned short arr_16 [16] [16] [16] ;
unsigned long long int arr_21 [17] ;
int arr_22 [17] ;
unsigned short arr_26 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)26509;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)29 : (signed char)-113;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)1661 : (unsigned short)56338;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 3863191530554782885LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = 1599226520940897310ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (unsigned short)56238;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = 3671090515606744581ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 465260626U : 2517073548U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)126 : (signed char)2;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -940928030562886951LL : -850873184072554779LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)5742 : (short)1027;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)43304 : (unsigned short)42630;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 9235556540434127389ULL : 14765349665938493801ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 1945037701 : -981909944;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned short)52784;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
