#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29895;
signed char var_2 = (signed char)41;
unsigned int var_4 = 2693651112U;
signed char var_6 = (signed char)-77;
unsigned long long int var_7 = 11933606044276042910ULL;
unsigned char var_8 = (unsigned char)132;
short var_9 = (short)27144;
unsigned short var_10 = (unsigned short)56101;
signed char var_12 = (signed char)39;
int var_13 = -1609060238;
_Bool var_14 = (_Bool)1;
long long int var_16 = 499185416705747081LL;
long long int var_17 = 6681932526189752119LL;
int zero = 0;
int var_19 = -1953899786;
long long int var_20 = -3649344966262681835LL;
unsigned int var_21 = 4045864041U;
long long int var_22 = -6808743776560159554LL;
int var_23 = -1707672153;
unsigned char var_24 = (unsigned char)8;
signed char var_25 = (signed char)-124;
unsigned short var_26 = (unsigned short)58347;
unsigned int var_27 = 155230408U;
long long int var_28 = -8491912818616607056LL;
unsigned int var_29 = 3249196675U;
int arr_0 [21] [21] ;
short arr_1 [21] ;
short arr_2 [21] ;
int arr_6 [17] ;
int arr_8 [14] ;
signed char arr_13 [21] ;
unsigned long long int arr_14 [21] ;
_Bool arr_3 [21] ;
long long int arr_10 [14] [14] ;
_Bool arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -1102706376;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-18258;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)3644;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -1046445496;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 1261402149;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)68 : (signed char)-14;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 6675043320271973110ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = -8221917602322809241LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
