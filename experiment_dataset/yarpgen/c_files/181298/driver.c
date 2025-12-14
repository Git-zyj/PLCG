#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -443229647;
_Bool var_1 = (_Bool)0;
long long int var_5 = 1971322252369204042LL;
unsigned long long int var_6 = 8119154701489800750ULL;
unsigned int var_7 = 466949518U;
unsigned int var_8 = 1576406424U;
short var_9 = (short)8676;
signed char var_10 = (signed char)51;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_14 = (short)24217;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 13658559620733001063ULL;
unsigned int var_17 = 1600123820U;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-23;
short arr_4 [24] [24] ;
unsigned int arr_5 [24] [24] ;
unsigned char arr_6 [24] [24] [24] ;
short arr_7 [24] ;
unsigned char arr_9 [24] [24] ;
unsigned char arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-21765;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 2351097714U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (short)4123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned char)117;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
