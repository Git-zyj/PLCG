#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18406365166701326353ULL;
short var_2 = (short)17626;
short var_3 = (short)-23053;
unsigned short var_4 = (unsigned short)10913;
long long int var_5 = 6976367654445069165LL;
unsigned short var_7 = (unsigned short)37980;
unsigned short var_8 = (unsigned short)15932;
signed char var_15 = (signed char)-120;
int zero = 0;
int var_17 = 1134041496;
int var_18 = 1119425712;
int var_19 = 1300266899;
unsigned char var_20 = (unsigned char)215;
int var_21 = -709570218;
int arr_0 [10] ;
short arr_1 [10] ;
_Bool arr_2 [10] [10] ;
unsigned char arr_8 [10] ;
long long int arr_11 [10] ;
unsigned char arr_19 [10] [10] [10] [10] [10] [10] ;
_Bool arr_4 [10] [10] ;
unsigned long long int arr_5 [10] ;
signed char arr_6 [10] [10] ;
unsigned int arr_9 [10] ;
unsigned int arr_10 [10] ;
unsigned int arr_21 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -759134686;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)14281;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = -3921628026789818090LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)131 : (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 6382589439430204320ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 1677266927U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 1963625634U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = 937723069U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
