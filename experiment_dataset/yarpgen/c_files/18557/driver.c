#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
unsigned long long int var_1 = 13769277979175320101ULL;
int var_2 = 374410506;
unsigned char var_6 = (unsigned char)231;
unsigned short var_7 = (unsigned short)55423;
unsigned short var_11 = (unsigned short)6884;
int var_12 = 759280973;
unsigned long long int var_14 = 16441652662974825412ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5527803318164595470ULL;
unsigned short var_18 = (unsigned short)3583;
unsigned long long int var_19 = 7579973325409683322ULL;
short var_20 = (short)-23685;
unsigned char var_21 = (unsigned char)35;
unsigned long long int var_22 = 16841499431833282827ULL;
unsigned short var_23 = (unsigned short)26677;
unsigned char arr_3 [14] ;
_Bool arr_4 [14] [14] ;
unsigned short arr_9 [12] ;
unsigned short arr_2 [11] ;
unsigned short arr_5 [14] ;
short arr_18 [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (unsigned short)7662;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)65124;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)24110;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (short)12834 : (short)-18407;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
