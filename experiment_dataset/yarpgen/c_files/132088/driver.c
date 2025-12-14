#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)28;
long long int var_5 = 4217692907509927683LL;
long long int var_6 = 5266506316174408287LL;
unsigned char var_7 = (unsigned char)133;
int zero = 0;
unsigned int var_10 = 3805669484U;
unsigned int var_11 = 640729206U;
unsigned int var_12 = 3810232719U;
long long int var_13 = 7829909563773497486LL;
long long int var_14 = 1493289799523669858LL;
unsigned short var_15 = (unsigned short)32491;
unsigned char var_16 = (unsigned char)207;
signed char var_17 = (signed char)-97;
unsigned char var_18 = (unsigned char)186;
signed char var_19 = (signed char)-31;
unsigned int var_20 = 2762794493U;
unsigned short var_21 = (unsigned short)13437;
int var_22 = -61720127;
unsigned short var_23 = (unsigned short)62407;
unsigned long long int var_24 = 753355985725898556ULL;
unsigned long long int arr_0 [21] ;
unsigned char arr_1 [21] ;
short arr_2 [21] ;
int arr_3 [21] [21] [21] ;
unsigned int arr_5 [21] [21] [21] [21] ;
unsigned char arr_6 [21] ;
unsigned short arr_7 [21] [21] [21] [21] ;
unsigned char arr_9 [21] [21] [21] [21] [21] [21] ;
long long int arr_10 [21] [21] [21] [21] ;
unsigned long long int arr_20 [10] ;
unsigned char arr_21 [10] ;
signed char arr_12 [21] [21] [21] ;
short arr_16 [21] [21] ;
signed char arr_17 [21] ;
unsigned char arr_23 [10] ;
unsigned char arr_28 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 7023717748013716560ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)15922;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -524950385;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2295182719U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)23224;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 7262446134113355518LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 13236580587137432548ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-662;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (unsigned char)171;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
