#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
unsigned int var_1 = 3846519955U;
unsigned char var_3 = (unsigned char)180;
unsigned char var_6 = (unsigned char)224;
unsigned short var_7 = (unsigned short)20230;
unsigned int var_16 = 3112046307U;
int zero = 0;
unsigned char var_19 = (unsigned char)81;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
int var_22 = 169988470;
unsigned int var_23 = 835321798U;
short var_24 = (short)17072;
unsigned char var_25 = (unsigned char)79;
unsigned char var_26 = (unsigned char)75;
int var_27 = 2144110654;
unsigned int var_28 = 1032491206U;
unsigned long long int var_29 = 8298075332100913443ULL;
unsigned int var_30 = 3377264740U;
unsigned short var_31 = (unsigned short)29271;
int var_32 = -1020770536;
unsigned int var_33 = 765833526U;
unsigned char var_34 = (unsigned char)133;
unsigned short var_35 = (unsigned short)45148;
unsigned short arr_0 [20] [20] ;
_Bool arr_1 [20] ;
int arr_5 [14] [14] [14] ;
unsigned long long int arr_7 [14] [14] [14] ;
_Bool arr_8 [14] ;
unsigned long long int arr_9 [14] [14] [14] ;
unsigned long long int arr_11 [14] [14] [14] [14] ;
signed char arr_12 [14] [14] [14] [14] ;
unsigned int arr_14 [17] ;
unsigned short arr_15 [17] ;
int arr_17 [17] [17] ;
unsigned char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)40059;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1890867700;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5160812857384483864ULL : 13676411650017794580ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 16036924250476211547ULL : 4434719190253864269ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 2624824465245154803ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)2 : (signed char)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 3659038808U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (unsigned short)22429;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = -216095142;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)47;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
