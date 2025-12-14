#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1153444874;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)64;
short var_5 = (short)20236;
long long int var_9 = -4285832695712937872LL;
unsigned short var_10 = (unsigned short)23098;
int zero = 0;
unsigned char var_14 = (unsigned char)228;
unsigned long long int var_15 = 11332441994976019732ULL;
unsigned char var_16 = (unsigned char)163;
unsigned long long int var_17 = 9958628759675106518ULL;
long long int var_18 = -8583365615271461405LL;
unsigned long long int var_19 = 269248517750022515ULL;
short var_20 = (short)10168;
_Bool var_21 = (_Bool)0;
long long int arr_3 [13] ;
_Bool arr_4 [13] ;
unsigned char arr_7 [13] [13] [13] ;
signed char arr_8 [13] [13] [13] ;
unsigned short arr_9 [13] [13] [13] ;
short arr_15 [11] ;
long long int arr_19 [11] [11] ;
long long int arr_25 [22] ;
unsigned long long int arr_13 [13] ;
long long int arr_21 [11] [11] [11] [11] ;
unsigned char arr_22 [11] ;
unsigned char arr_23 [11] ;
unsigned long long int arr_27 [22] ;
unsigned long long int arr_28 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 5255174718789634068LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)12864;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (short)-16387;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = 1375260916976541356LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 9034048120260341665LL : 5721042004799558353LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 7029726067154932799ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -3169494214470764689LL : -1890814305744802529LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)145 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned char)72 : (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 16755262995880116552ULL : 6992787447128011318ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 5099834800209247476ULL : 4586534788725773133ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
