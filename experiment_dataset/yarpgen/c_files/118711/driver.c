#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1438058330;
unsigned int var_2 = 3458638379U;
unsigned char var_4 = (unsigned char)50;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 12990577216191544020ULL;
unsigned char var_10 = (unsigned char)90;
_Bool var_12 = (_Bool)0;
unsigned long long int var_16 = 14296053560989682672ULL;
unsigned short var_17 = (unsigned short)48529;
int var_18 = 1874474051;
int zero = 0;
unsigned long long int var_19 = 16628982369601263597ULL;
unsigned short var_20 = (unsigned short)315;
unsigned char var_21 = (unsigned char)7;
int var_22 = -1265999205;
short var_23 = (short)-23744;
int var_24 = -1708474979;
long long int var_25 = 2686038866842842965LL;
_Bool var_26 = (_Bool)0;
signed char arr_0 [23] ;
int arr_2 [23] [23] ;
unsigned char arr_3 [23] [23] ;
unsigned long long int arr_7 [12] ;
unsigned long long int arr_8 [12] ;
int arr_11 [12] [12] [12] [12] ;
unsigned short arr_12 [12] ;
short arr_13 [12] ;
int arr_15 [12] [12] [12] [12] [12] ;
unsigned int arr_16 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 1849079274;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 3879642299725552557ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1117819834073990846ULL : 8307581547048029989ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2078527133 : -570536468;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)40889 : (unsigned short)23727;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (short)1040;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 540939596;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 2565631588U : 1268749916U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
