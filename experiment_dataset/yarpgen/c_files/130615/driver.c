#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
short var_2 = (short)-13176;
short var_3 = (short)11691;
short var_6 = (short)-20587;
signed char var_7 = (signed char)109;
unsigned char var_10 = (unsigned char)222;
long long int var_11 = 8001691803818981922LL;
int var_14 = -1107769494;
int zero = 0;
short var_15 = (short)23180;
signed char var_16 = (signed char)79;
unsigned char var_17 = (unsigned char)192;
unsigned short var_18 = (unsigned short)8894;
unsigned char var_19 = (unsigned char)111;
long long int var_20 = 8443796849638029857LL;
long long int var_21 = 214085869670129332LL;
short var_22 = (short)-31155;
int var_23 = 1275385702;
int var_24 = 634519984;
_Bool var_25 = (_Bool)0;
int var_26 = 1812621459;
signed char var_27 = (signed char)-55;
unsigned int var_28 = 2689767477U;
short var_29 = (short)28921;
unsigned short var_30 = (unsigned short)20491;
short arr_0 [14] ;
short arr_2 [14] ;
signed char arr_3 [14] ;
unsigned int arr_4 [14] [14] ;
unsigned int arr_8 [14] [14] [14] ;
short arr_9 [14] [14] [14] [14] [14] ;
_Bool arr_10 [14] [14] ;
unsigned int arr_11 [14] [14] [14] [14] ;
unsigned char arr_23 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)10527;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-29831;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)12 : (signed char)-6;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 377344046U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1623251892U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)24096;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 35611002U : 3243845184U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (unsigned char)79;
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
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
