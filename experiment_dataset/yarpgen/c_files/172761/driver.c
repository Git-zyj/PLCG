#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33806;
unsigned short var_1 = (unsigned short)46968;
short var_3 = (short)-15585;
unsigned int var_4 = 3222130935U;
unsigned long long int var_5 = 2239551016482794494ULL;
unsigned short var_7 = (unsigned short)5077;
short var_8 = (short)-32682;
unsigned long long int var_9 = 1410724147419177400ULL;
signed char var_10 = (signed char)83;
int zero = 0;
long long int var_11 = 8710677880033801008LL;
unsigned char var_12 = (unsigned char)233;
_Bool var_13 = (_Bool)1;
int var_14 = -2033637684;
int var_15 = 947271228;
unsigned long long int arr_11 [10] [10] [10] ;
unsigned short arr_12 [10] ;
unsigned int arr_6 [13] [13] [13] ;
unsigned long long int arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 17280683339049490196ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned short)19948;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 624411691U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 8351767601716051844ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
