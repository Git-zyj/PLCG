#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1986563887U;
unsigned short var_2 = (unsigned short)36961;
unsigned char var_7 = (unsigned char)110;
short var_9 = (short)17501;
long long int var_11 = 6378902559676897759LL;
signed char var_12 = (signed char)52;
signed char var_14 = (signed char)-42;
unsigned short var_15 = (unsigned short)45380;
unsigned short var_17 = (unsigned short)27141;
signed char var_18 = (signed char)-94;
unsigned short var_19 = (unsigned short)16135;
int zero = 0;
unsigned short var_20 = (unsigned short)41048;
int var_21 = -1586118243;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 12314823290083560841ULL;
unsigned long long int var_24 = 17434104712399818407ULL;
short var_25 = (short)21916;
unsigned short var_26 = (unsigned short)41994;
unsigned int var_27 = 1333817552U;
unsigned long long int var_28 = 14075317369617070045ULL;
int arr_2 [12] ;
short arr_3 [12] [12] ;
unsigned short arr_5 [12] [12] ;
unsigned char arr_6 [12] [12] [12] ;
long long int arr_7 [12] ;
unsigned long long int arr_9 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1920550779;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)27383;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)38967;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -651659716814334173LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 12244148217468754243ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
