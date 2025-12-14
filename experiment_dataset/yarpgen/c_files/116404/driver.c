#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 994024980U;
signed char var_1 = (signed char)-20;
long long int var_2 = 1705139851260623631LL;
short var_4 = (short)-24866;
unsigned int var_5 = 1794403834U;
unsigned short var_6 = (unsigned short)44688;
long long int var_7 = -2353656414570679019LL;
unsigned char var_13 = (unsigned char)130;
long long int var_14 = -2207652050936434848LL;
long long int var_15 = 3930705274737853379LL;
unsigned int var_16 = 1811617670U;
long long int var_17 = -617118213091996713LL;
signed char var_18 = (signed char)11;
int zero = 0;
short var_19 = (short)-6378;
long long int var_20 = -6005179811060059040LL;
int var_21 = 1951299522;
short var_22 = (short)-13669;
signed char var_23 = (signed char)3;
int var_24 = -180232267;
short arr_0 [23] ;
short arr_4 [23] [23] [23] ;
_Bool arr_5 [23] [23] ;
long long int arr_7 [11] ;
int arr_15 [11] [11] ;
unsigned char arr_16 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)21422;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)2351 : (short)-25645;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 6975958094790223088LL : -2400466130038868613LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? -99166858 : -375100554;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)107 : (unsigned char)100;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
