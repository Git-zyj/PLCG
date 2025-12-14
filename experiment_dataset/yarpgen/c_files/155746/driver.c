#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7101531283222574448LL;
unsigned int var_1 = 4226777099U;
unsigned short var_3 = (unsigned short)35828;
signed char var_4 = (signed char)-104;
unsigned long long int var_5 = 5702090921718013810ULL;
_Bool var_7 = (_Bool)1;
long long int var_9 = 753747825503698825LL;
short var_10 = (short)26095;
long long int var_11 = 6729639867610760440LL;
long long int var_12 = 1486785962699395741LL;
int zero = 0;
unsigned long long int var_13 = 9703063157358182853ULL;
unsigned char var_14 = (unsigned char)179;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)19455;
long long int var_19 = 6870903158176743131LL;
signed char var_20 = (signed char)107;
_Bool arr_1 [11] [11] ;
_Bool arr_2 [11] [11] [11] ;
_Bool arr_3 [11] [11] [11] ;
unsigned long long int arr_4 [11] [11] ;
unsigned char arr_5 [11] ;
signed char arr_6 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 6697408143503812205ULL : 9821965616948167686ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-24;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
