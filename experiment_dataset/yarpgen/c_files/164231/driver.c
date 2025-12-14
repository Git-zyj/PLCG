#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
unsigned char var_2 = (unsigned char)126;
long long int var_3 = 6302762551199018075LL;
_Bool var_4 = (_Bool)0;
int var_5 = -2011209847;
long long int var_6 = 9019127005932517162LL;
short var_7 = (short)16043;
int var_8 = -1464316854;
unsigned char var_10 = (unsigned char)173;
signed char var_11 = (signed char)(-127 - 1);
long long int var_14 = 8161143197101464822LL;
signed char var_15 = (signed char)38;
int zero = 0;
int var_16 = -1661607055;
unsigned char var_17 = (unsigned char)36;
unsigned long long int var_18 = 8944990867972016305ULL;
signed char var_19 = (signed char)-71;
unsigned long long int var_20 = 10280620277607248279ULL;
long long int var_21 = 3999229750657353784LL;
signed char var_22 = (signed char)-20;
unsigned short var_23 = (unsigned short)25936;
unsigned long long int var_24 = 16513488740630068827ULL;
unsigned long long int arr_0 [21] ;
unsigned char arr_1 [21] ;
long long int arr_3 [21] ;
unsigned char arr_4 [21] ;
unsigned char arr_7 [21] [21] [21] [21] ;
_Bool arr_8 [21] [21] [21] ;
unsigned char arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 12183132696715827568ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -6831191095785093762LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned char)227;
}

void checksum() {
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
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
