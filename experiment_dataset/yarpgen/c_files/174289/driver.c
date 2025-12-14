#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8340320404519481577LL;
int var_2 = 1239067679;
unsigned long long int var_3 = 15812277144375614347ULL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-28;
unsigned short var_10 = (unsigned short)23172;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int var_15 = 1822325306;
unsigned long long int var_16 = 1275747455288503339ULL;
int zero = 0;
long long int var_19 = 992969065049686185LL;
short var_20 = (short)26296;
short var_21 = (short)22272;
short var_22 = (short)26213;
unsigned short var_23 = (unsigned short)19406;
int var_24 = 90390181;
_Bool var_25 = (_Bool)1;
int arr_0 [13] [13] ;
int arr_1 [13] ;
signed char arr_2 [19] [19] ;
unsigned short arr_3 [19] ;
unsigned int arr_5 [19] ;
short arr_6 [19] ;
int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 1153245405;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -661985631;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)55572;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1355000989U : 3815225327U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)27849 : (short)10476;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1210206777 : -1935015826;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
