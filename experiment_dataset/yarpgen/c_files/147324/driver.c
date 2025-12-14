#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17202762853967658109ULL;
unsigned short var_6 = (unsigned short)45202;
_Bool var_7 = (_Bool)0;
long long int var_9 = 4244370725365260296LL;
int zero = 0;
signed char var_12 = (signed char)31;
long long int var_13 = 700611171779356201LL;
int var_14 = -1969995838;
long long int var_15 = -7413892208208974436LL;
int var_16 = 1458116091;
short var_17 = (short)20192;
long long int var_18 = 3953675595238154580LL;
unsigned long long int var_19 = 5339507287605189152ULL;
unsigned long long int var_20 = 12911560453086995289ULL;
unsigned short var_21 = (unsigned short)19409;
_Bool var_22 = (_Bool)1;
int var_23 = -1819599906;
int var_24 = 1512164481;
unsigned char var_25 = (unsigned char)164;
short arr_0 [14] ;
signed char arr_1 [14] ;
unsigned char arr_2 [14] ;
unsigned char arr_5 [14] ;
short arr_6 [14] [14] [14] ;
short arr_9 [14] [14] ;
_Bool arr_10 [14] ;
unsigned short arr_3 [14] ;
unsigned long long int arr_7 [14] ;
_Bool arr_11 [14] ;
long long int arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-22169;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-16049;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (short)22968;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)16442;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 13016774293507940847ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = -3779262725281132541LL;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
