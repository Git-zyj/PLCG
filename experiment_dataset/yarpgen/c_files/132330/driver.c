#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51419;
unsigned long long int var_3 = 49689018206180597ULL;
int var_4 = -506229878;
int var_5 = -1886265367;
signed char var_8 = (signed char)-98;
unsigned short var_9 = (unsigned short)51416;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 6338905225265424630LL;
signed char var_15 = (signed char)(-127 - 1);
unsigned short var_16 = (unsigned short)32784;
unsigned long long int var_17 = 1682546073474327062ULL;
long long int var_18 = 1269410976476470547LL;
unsigned short var_19 = (unsigned short)15299;
unsigned char var_20 = (unsigned char)170;
int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned short arr_4 [20] ;
signed char arr_6 [20] ;
short arr_7 [20] ;
unsigned short arr_8 [20] [20] [20] ;
unsigned long long int arr_14 [19] [19] ;
unsigned long long int arr_15 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1415180163;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 14801796220191684718ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51082 : (unsigned short)58481;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)64 : (signed char)-10;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-9799 : (short)-29995;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)7917 : (unsigned short)34468;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 1725703506168103731ULL : 4318219960566004658ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 5236218122851640697ULL : 18159760620604244885ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
