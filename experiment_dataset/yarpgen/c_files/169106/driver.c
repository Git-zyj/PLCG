#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30414;
unsigned long long int var_1 = 7573275528942807263ULL;
unsigned char var_2 = (unsigned char)235;
unsigned int var_3 = 3325534994U;
unsigned long long int var_4 = 11362485733842085529ULL;
long long int var_5 = -1637374442223703223LL;
unsigned short var_6 = (unsigned short)13932;
int var_8 = -368418072;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)5523;
unsigned short var_12 = (unsigned short)3790;
unsigned short var_13 = (unsigned short)11150;
signed char var_14 = (signed char)120;
unsigned char var_15 = (unsigned char)54;
signed char var_16 = (signed char)93;
int zero = 0;
unsigned char var_17 = (unsigned char)121;
unsigned short var_18 = (unsigned short)25214;
signed char var_19 = (signed char)0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14926619566567806710ULL;
int var_22 = 217356187;
unsigned long long int var_23 = 13123910538677273050ULL;
unsigned short var_24 = (unsigned short)7920;
long long int var_25 = 6862590115747745428LL;
unsigned long long int var_26 = 11186223905275172245ULL;
short var_27 = (short)-4602;
unsigned long long int var_28 = 15320247531411859031ULL;
int arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
_Bool arr_5 [16] ;
short arr_6 [16] [16] [16] ;
unsigned long long int arr_7 [16] ;
int arr_2 [16] ;
unsigned char arr_9 [16] ;
unsigned short arr_12 [16] [16] [16] ;
long long int arr_13 [16] ;
int arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -625236470 : -664082702;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)37906;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)8298;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 11481881464132350086ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2109062133 : -1525380397;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)36 : (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)44598 : (unsigned short)45120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -5433469483244309321LL : 5858691097414702422LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -1665147050 : -1742975544;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
