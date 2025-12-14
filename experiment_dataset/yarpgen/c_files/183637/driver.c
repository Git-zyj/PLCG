#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1803439076;
unsigned short var_2 = (unsigned short)27216;
short var_3 = (short)-30256;
signed char var_4 = (signed char)127;
long long int var_5 = -386462467280238322LL;
unsigned int var_6 = 2535247244U;
unsigned int var_8 = 2029540233U;
long long int var_9 = 4767119777502778362LL;
long long int var_10 = 6276477457447743677LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)11313;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1697247922U;
unsigned char var_20 = (unsigned char)96;
unsigned long long int var_21 = 3173209247876127214ULL;
_Bool var_22 = (_Bool)1;
unsigned char arr_1 [15] ;
unsigned char arr_2 [20] ;
unsigned short arr_3 [20] ;
unsigned int arr_4 [20] [20] ;
signed char arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)10567;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 4053381118U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)-54;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
