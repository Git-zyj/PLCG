#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 826989041;
long long int var_1 = 5247601813043508434LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 14962881641042644306ULL;
unsigned int var_7 = 171108530U;
unsigned char var_8 = (unsigned char)169;
unsigned long long int var_9 = 5180240703542878007ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 1646457384602848869ULL;
unsigned char var_13 = (unsigned char)89;
unsigned int var_14 = 1735738559U;
unsigned long long int var_15 = 13266973598508197649ULL;
unsigned int var_16 = 2967464755U;
unsigned char var_17 = (unsigned char)156;
long long int var_18 = -4770933556273872014LL;
unsigned char var_19 = (unsigned char)132;
long long int var_20 = 1260531367008785672LL;
short var_21 = (short)4468;
signed char var_22 = (signed char)39;
unsigned int arr_0 [20] [20] ;
unsigned char arr_4 [20] [20] ;
long long int arr_5 [20] [20] ;
signed char arr_7 [20] ;
short arr_8 [20] [20] [20] ;
short arr_10 [20] [20] ;
unsigned long long int arr_12 [22] ;
unsigned int arr_13 [22] [22] ;
unsigned char arr_3 [20] ;
short arr_11 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 4269157316U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 835460134856105960LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)29608 : (short)16556;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-12979;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 743449238828653637ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = 1333273700U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)57 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-2112 : (short)-20499;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
