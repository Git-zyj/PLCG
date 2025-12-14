#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
signed char var_1 = (signed char)-57;
short var_2 = (short)-21868;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-3106;
_Bool var_6 = (_Bool)0;
long long int var_7 = 2921442350343622908LL;
short var_8 = (short)-16510;
unsigned int var_9 = 731331307U;
unsigned int var_10 = 2779584131U;
unsigned short var_14 = (unsigned short)14112;
int var_15 = 1099511657;
unsigned int var_16 = 1286965999U;
long long int var_18 = -7191207984347670178LL;
int zero = 0;
short var_19 = (short)7788;
unsigned int var_20 = 588630692U;
unsigned long long int var_21 = 14497842937897978440ULL;
short var_22 = (short)-17965;
signed char var_23 = (signed char)-4;
long long int var_24 = 2588886317409334313LL;
unsigned short arr_0 [13] ;
_Bool arr_1 [13] ;
unsigned short arr_2 [13] [13] [13] ;
unsigned int arr_3 [13] [13] [13] ;
unsigned long long int arr_6 [13] ;
unsigned long long int arr_4 [13] ;
int arr_12 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)61359;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)60968;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 119961758U : 4128764916U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 4667611512556673624ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 912401883100819720ULL : 16306531565313175820ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 1488238401 : 824154898;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
