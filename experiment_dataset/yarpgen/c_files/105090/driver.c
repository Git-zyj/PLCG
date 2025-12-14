#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2780048897U;
long long int var_2 = -3422911213632380573LL;
short var_4 = (short)17395;
signed char var_5 = (signed char)-51;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1799364629U;
unsigned char var_8 = (unsigned char)114;
short var_9 = (short)8822;
_Bool var_10 = (_Bool)0;
long long int var_11 = -2189421033724345848LL;
signed char var_12 = (signed char)-116;
int zero = 0;
signed char var_13 = (signed char)19;
unsigned int var_14 = 859614017U;
int var_15 = 1322459379;
signed char var_16 = (signed char)105;
unsigned int var_17 = 3312242358U;
int var_18 = 922022936;
int var_19 = 682409081;
signed char arr_1 [13] [13] ;
long long int arr_2 [13] [13] ;
unsigned short arr_3 [13] ;
unsigned short arr_4 [13] [13] ;
unsigned short arr_8 [15] ;
unsigned char arr_9 [15] [15] ;
signed char arr_6 [13] ;
unsigned long long int arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)27 : (signed char)-49;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -7492002751128841047LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)35893;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)9360;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3745 : (unsigned short)46025;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)78 : (signed char)-76;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 13688256236382081380ULL : 4880089286283083065ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
