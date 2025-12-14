#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1991922842;
long long int var_2 = -4552481570117303343LL;
unsigned short var_4 = (unsigned short)31620;
_Bool var_5 = (_Bool)1;
int var_6 = -1842968582;
unsigned char var_7 = (unsigned char)212;
unsigned int var_9 = 1672155108U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)10427;
unsigned short var_17 = (unsigned short)42331;
signed char var_18 = (signed char)-67;
unsigned int var_19 = 2127248244U;
unsigned long long int var_20 = 14534601934838638388ULL;
_Bool var_21 = (_Bool)1;
unsigned short arr_0 [17] ;
int arr_1 [17] ;
unsigned int arr_9 [17] [17] [17] ;
unsigned char arr_10 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)42124;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -715069310 : 583015571;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 610217161U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)131 : (unsigned char)201;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
