#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50439;
unsigned short var_3 = (unsigned short)51301;
short var_4 = (short)-5392;
short var_5 = (short)30994;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)41151;
signed char var_8 = (signed char)-40;
unsigned char var_10 = (unsigned char)1;
signed char var_11 = (signed char)-95;
int var_12 = -876100496;
int var_13 = -1031674684;
signed char var_14 = (signed char)63;
int zero = 0;
short var_15 = (short)31916;
unsigned int var_16 = 1943158701U;
unsigned long long int var_17 = 1893019783219049747ULL;
unsigned int var_18 = 2949906909U;
long long int var_19 = -547930000987352808LL;
unsigned int var_20 = 3665615771U;
unsigned int var_21 = 1471051760U;
unsigned int var_22 = 1353527031U;
unsigned int var_23 = 3996499208U;
unsigned char var_24 = (unsigned char)139;
short var_25 = (short)16759;
int var_26 = 707195706;
unsigned int var_27 = 556982089U;
unsigned long long int var_28 = 12345166741580366437ULL;
short var_29 = (short)-16280;
signed char arr_0 [17] [17] ;
short arr_2 [17] ;
int arr_3 [17] ;
unsigned short arr_4 [17] [17] ;
short arr_5 [17] [17] ;
int arr_7 [17] ;
unsigned int arr_10 [17] [17] [17] ;
unsigned short arr_36 [23] ;
unsigned long long int arr_37 [23] ;
int arr_6 [17] ;
signed char arr_11 [17] [17] ;
unsigned int arr_29 [17] ;
unsigned long long int arr_30 [17] [17] [17] ;
long long int arr_35 [17] ;
unsigned short arr_38 [23] ;
_Bool arr_39 [23] ;
_Bool arr_42 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)10140;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -948687874 : -1503467660;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)30753;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-18074;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -457285243;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4066874522U : 1722634547U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53427 : (unsigned short)59800;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_37 [i_0] = 11028213908293559322ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 425138172 : -236203269;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-61 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 1366316188U : 91349573U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1966338328432066327ULL : 8183181188355248360ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 4335802560284662841LL : -2967164484124519645LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27859 : (unsigned short)31421;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_42 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
