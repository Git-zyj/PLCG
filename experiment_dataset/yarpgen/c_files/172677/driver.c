#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-114;
unsigned short var_3 = (unsigned short)45309;
signed char var_6 = (signed char)83;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned long long int var_14 = 13448278568899009031ULL;
signed char var_15 = (signed char)-46;
short var_16 = (short)-11811;
unsigned char var_17 = (unsigned char)151;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)74;
unsigned short var_20 = (unsigned short)18358;
unsigned long long int var_21 = 2958165108859124800ULL;
short var_22 = (short)14800;
_Bool var_23 = (_Bool)0;
long long int var_24 = 5351896294362626567LL;
unsigned long long int var_25 = 2998851621161008507ULL;
signed char var_26 = (signed char)72;
short var_27 = (short)22480;
signed char arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
int arr_2 [22] ;
int arr_3 [22] ;
short arr_4 [22] ;
signed char arr_5 [22] [22] ;
short arr_6 [22] [22] ;
int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 11381192795358063627ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -1171063428;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -1373905908;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)-13072;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (short)24255;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 99976501;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
