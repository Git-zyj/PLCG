#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1926362786U;
unsigned long long int var_1 = 7248299507176981993ULL;
int var_2 = 1617668253;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 2180835018947457753ULL;
unsigned int var_5 = 4216178083U;
unsigned char var_6 = (unsigned char)191;
unsigned short var_7 = (unsigned short)17436;
int var_8 = 715567496;
unsigned char var_9 = (unsigned char)64;
int zero = 0;
unsigned short var_10 = (unsigned short)32930;
long long int var_11 = 449605539226077299LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4428395894588636071LL;
unsigned short var_14 = (unsigned short)50256;
signed char var_15 = (signed char)-30;
long long int var_16 = -1852586468646370961LL;
unsigned char var_17 = (unsigned char)12;
unsigned long long int var_18 = 16645352056849317940ULL;
short var_19 = (short)-26030;
unsigned long long int var_20 = 17677333724208291863ULL;
unsigned short var_21 = (unsigned short)23735;
long long int arr_3 [11] [11] ;
unsigned long long int arr_5 [11] [11] [11] ;
_Bool arr_12 [11] ;
long long int arr_13 [17] ;
signed char arr_14 [17] ;
long long int arr_18 [17] [17] ;
short arr_19 [17] ;
unsigned char arr_20 [17] [17] [17] ;
int arr_16 [17] ;
unsigned short arr_17 [17] [17] ;
long long int arr_22 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 897289893264803266LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4010722342036268258ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 2482893842235682296LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)98 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? -7830195273023713442LL : -5893243992035464791LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (short)463;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -1343044680 : -286814307;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)27452 : (unsigned short)63807;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 93070909947747095LL : -7377432820313446656LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
