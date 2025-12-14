#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43231;
int var_3 = -1068641584;
int var_4 = -1275669699;
int var_5 = 27238176;
int var_10 = 1191693287;
unsigned short var_13 = (unsigned short)4708;
unsigned short var_14 = (unsigned short)3749;
int var_16 = 1220209815;
signed char var_17 = (signed char)110;
int var_18 = -1967243881;
int zero = 0;
short var_19 = (short)-10576;
int var_20 = 1184264605;
short var_21 = (short)-25694;
unsigned short var_22 = (unsigned short)47042;
unsigned long long int var_23 = 11562945999146467604ULL;
short var_24 = (short)-11681;
unsigned char var_25 = (unsigned char)155;
_Bool arr_1 [23] ;
int arr_3 [23] ;
unsigned long long int arr_4 [23] [23] [23] ;
short arr_5 [23] [23] ;
short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1107506465;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 15134318665826802719ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-15786;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)2434;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
