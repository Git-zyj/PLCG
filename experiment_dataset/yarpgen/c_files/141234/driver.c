#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16994;
short var_1 = (short)-5203;
unsigned short var_2 = (unsigned short)51731;
int var_3 = -1449664208;
unsigned short var_5 = (unsigned short)10788;
short var_6 = (short)-7616;
int var_7 = -1993485657;
unsigned long long int var_9 = 13678364043910206852ULL;
short var_10 = (short)-26369;
unsigned char var_11 = (unsigned char)89;
unsigned short var_12 = (unsigned short)15529;
int zero = 0;
long long int var_13 = -4868941239966870386LL;
unsigned char var_14 = (unsigned char)107;
unsigned short var_15 = (unsigned short)50313;
short var_16 = (short)-21909;
long long int var_17 = -4194423791210243399LL;
long long int var_18 = 6977048195750730593LL;
signed char var_19 = (signed char)-46;
unsigned short var_20 = (unsigned short)23920;
unsigned short var_21 = (unsigned short)20726;
short var_22 = (short)4189;
unsigned short arr_0 [21] ;
unsigned short arr_1 [21] [21] ;
unsigned short arr_2 [21] ;
signed char arr_3 [21] [21] ;
unsigned short arr_4 [21] ;
unsigned short arr_5 [21] [21] ;
unsigned short arr_7 [21] [21] [21] ;
unsigned short arr_9 [21] [21] ;
unsigned short arr_6 [21] [21] ;
long long int arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)22646;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)53907;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)30444;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)43447;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)36406;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)17665;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)29452;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)4358 : (unsigned short)34156;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 484235281037933889LL;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
