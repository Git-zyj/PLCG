#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17176497398874986542ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)49576;
unsigned short var_6 = (unsigned short)59551;
unsigned short var_7 = (unsigned short)57965;
short var_8 = (short)25972;
unsigned short var_9 = (unsigned short)8186;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)166;
int zero = 0;
short var_14 = (short)23803;
short var_15 = (short)27427;
signed char var_16 = (signed char)-5;
short var_17 = (short)-26076;
int var_18 = 2020574753;
signed char var_19 = (signed char)121;
unsigned short var_20 = (unsigned short)20631;
long long int arr_1 [13] [13] ;
short arr_2 [13] [13] ;
unsigned short arr_5 [13] [13] ;
short arr_6 [13] ;
unsigned char arr_10 [13] ;
long long int arr_11 [13] [13] [13] ;
short arr_13 [13] [13] [13] [13] [13] ;
short arr_18 [13] [13] [13] [13] ;
unsigned long long int arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -3923593225092158039LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-25416;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)38762;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-3883;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -6793213143270108071LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-309;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-6458 : (short)6802;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 15726224725647986256ULL : 7405577652709792977ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
