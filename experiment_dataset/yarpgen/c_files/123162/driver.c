#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int var_5 = -1254057005;
signed char var_6 = (signed char)2;
unsigned char var_8 = (unsigned char)12;
int var_10 = -160371896;
int zero = 0;
unsigned char var_11 = (unsigned char)111;
int var_12 = -604437846;
unsigned char var_13 = (unsigned char)142;
short var_14 = (short)17658;
signed char var_15 = (signed char)85;
short var_16 = (short)-30413;
unsigned long long int var_17 = 4170092928244092816ULL;
int var_18 = 1730336328;
int var_19 = -703849946;
int var_20 = -1343607469;
long long int var_21 = 9204602907704091428LL;
int arr_3 [17] [17] ;
int arr_7 [17] ;
int arr_8 [17] [17] [17] ;
int arr_11 [17] [17] [17] [17] [17] ;
long long int arr_14 [17] ;
unsigned char arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1052446658 : -1863567443;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -154064201;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1389223979 : -1371384842;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -2115255552 : 1223203369;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -3399604559829714159LL : -6463736335276265743LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)66 : (unsigned char)168;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
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
