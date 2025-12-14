#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22052;
long long int var_3 = -8457987241368298052LL;
int var_4 = 1957933844;
long long int var_5 = 2939554568184824387LL;
unsigned int var_6 = 2842885059U;
int var_7 = 230528937;
int var_8 = 832024826;
long long int var_10 = -8744706752142071152LL;
unsigned long long int var_11 = 9883808420853717535ULL;
int var_12 = -1008628847;
int zero = 0;
int var_13 = 1839199574;
signed char var_14 = (signed char)16;
short var_15 = (short)-15193;
unsigned char var_16 = (unsigned char)153;
short var_17 = (short)-5239;
signed char var_18 = (signed char)22;
long long int var_19 = -3148035666868828681LL;
long long int var_20 = -4998285474529259914LL;
unsigned char var_21 = (unsigned char)75;
short var_22 = (short)25328;
short arr_1 [22] [22] ;
unsigned long long int arr_2 [22] ;
signed char arr_3 [22] [22] [22] ;
_Bool arr_4 [22] [22] [22] ;
int arr_7 [22] [22] [22] [22] ;
unsigned long long int arr_8 [22] [22] [22] ;
unsigned long long int arr_9 [22] [22] [22] [22] ;
int arr_16 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)1592 : (short)-19674;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 17467446011407982387ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-21 : (signed char)65;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -246214699 : -1110418575;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 11392140919791838503ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 17750610990308730651ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -923342756 : 1122473625;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
