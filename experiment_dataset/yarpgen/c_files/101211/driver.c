#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
int var_2 = 389649354;
unsigned int var_4 = 1861373141U;
unsigned long long int var_5 = 6809052088860495349ULL;
unsigned int var_6 = 1071563457U;
unsigned short var_7 = (unsigned short)60226;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1726224143U;
long long int var_11 = -4320451200761496289LL;
int zero = 0;
unsigned long long int var_12 = 15549892050993110968ULL;
unsigned long long int var_13 = 10259211906380590880ULL;
unsigned char var_14 = (unsigned char)193;
short var_15 = (short)-9488;
unsigned int var_16 = 1617570854U;
unsigned int var_17 = 1653917221U;
long long int var_18 = -3159506269573463083LL;
int var_19 = -385391771;
unsigned char var_20 = (unsigned char)148;
unsigned char var_21 = (unsigned char)153;
unsigned short var_22 = (unsigned short)59102;
unsigned short arr_1 [12] ;
int arr_5 [12] [12] ;
short arr_6 [12] ;
unsigned long long int arr_9 [12] [12] [12] [12] ;
unsigned short arr_14 [12] ;
long long int arr_20 [12] [12] [12] [12] [12] ;
signed char arr_25 [13] ;
_Bool arr_30 [13] [13] [13] [13] ;
unsigned short arr_12 [12] [12] ;
short arr_21 [12] [12] ;
unsigned int arr_22 [12] ;
unsigned short arr_23 [12] ;
short arr_31 [13] [13] [13] [13] ;
unsigned short arr_32 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)38981;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = -153499102;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)-10994;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 16147780289845893078ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37357 : (unsigned short)3396;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -1679137102640762310LL : -6848867141763128831LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)12478 : (unsigned short)44163;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)29167 : (short)9798;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = 509862455U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = (unsigned short)7996;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (short)-30043;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = (unsigned short)2277;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
