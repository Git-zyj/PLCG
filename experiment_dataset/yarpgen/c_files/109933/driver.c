#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35425;
signed char var_4 = (signed char)28;
unsigned short var_7 = (unsigned short)19653;
signed char var_8 = (signed char)-115;
short var_11 = (short)-30992;
long long int var_12 = -7214631845712959565LL;
long long int var_15 = -5234197717719693681LL;
signed char var_18 = (signed char)114;
int zero = 0;
int var_20 = -1695266548;
signed char var_21 = (signed char)116;
long long int var_22 = 2494263076881297289LL;
int var_23 = -2146834012;
int var_24 = -300650640;
long long int var_25 = 7725517142154294499LL;
unsigned short var_26 = (unsigned short)1634;
unsigned char var_27 = (unsigned char)70;
signed char var_28 = (signed char)-29;
int var_29 = 1114184138;
unsigned short arr_0 [25] [25] ;
unsigned short arr_3 [25] ;
int arr_8 [17] ;
int arr_9 [17] [17] ;
int arr_4 [25] ;
short arr_5 [25] ;
_Bool arr_10 [17] ;
unsigned short arr_11 [17] ;
long long int arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)14900;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)11407;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 111569250;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 287555170;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 165135344 : -509260523;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-12995 : (short)30405;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60311 : (unsigned short)45945;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 5378060939497780784LL : -3165404151899496263LL;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
