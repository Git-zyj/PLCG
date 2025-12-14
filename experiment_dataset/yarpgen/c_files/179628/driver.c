#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4157225138U;
unsigned long long int var_1 = 18047143967403777435ULL;
unsigned short var_2 = (unsigned short)34980;
short var_3 = (short)17800;
unsigned short var_4 = (unsigned short)63888;
int var_6 = -1263057084;
int var_7 = 1227510029;
_Bool var_8 = (_Bool)0;
short var_9 = (short)7918;
unsigned int var_10 = 1141268668U;
short var_11 = (short)-30361;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-104;
unsigned long long int var_14 = 18163494126953991126ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)190;
int zero = 0;
short var_18 = (short)9901;
short var_19 = (short)-734;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11919618656682499243ULL;
unsigned long long int var_22 = 17134416112957361968ULL;
signed char var_23 = (signed char)54;
long long int var_24 = -198690347552499913LL;
unsigned long long int var_25 = 12273896442062987498ULL;
int var_26 = 795845698;
unsigned short var_27 = (unsigned short)42695;
_Bool arr_2 [23] ;
unsigned int arr_6 [24] ;
long long int arr_8 [24] ;
unsigned char arr_9 [24] ;
_Bool arr_12 [24] [24] [24] [24] ;
unsigned short arr_13 [24] [24] [24] [24] ;
int arr_16 [17] [17] ;
unsigned long long int arr_18 [17] [17] [17] ;
short arr_19 [17] ;
unsigned char arr_22 [17] [17] [17] ;
short arr_23 [17] ;
signed char arr_3 [23] ;
unsigned char arr_4 [23] [23] ;
unsigned long long int arr_17 [17] [17] ;
_Bool arr_20 [17] ;
short arr_21 [17] [17] ;
signed char arr_27 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 77153074U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -8767044402718172838LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)159 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)44371 : (unsigned short)38272;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = 1423328499;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5053037750900516581ULL : 7138844558076449473ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (short)-23640;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (short)-29608;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = 17082539901939828090ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-3021 : (short)6065;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-113 : (signed char)-127;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
