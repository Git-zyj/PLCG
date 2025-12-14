#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18080028198409371474ULL;
int var_1 = -1608179977;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)7924;
unsigned short var_4 = (unsigned short)11277;
unsigned char var_5 = (unsigned char)124;
unsigned char var_6 = (unsigned char)96;
_Bool var_7 = (_Bool)0;
long long int var_8 = -8751342408667677818LL;
int var_9 = 1893992722;
_Bool var_10 = (_Bool)0;
int var_11 = -1233156310;
int var_12 = 2143519513;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -4577754984315382959LL;
unsigned short var_15 = (unsigned short)629;
_Bool var_16 = (_Bool)1;
long long int var_17 = -4523250576439636336LL;
unsigned short var_18 = (unsigned short)10718;
signed char var_19 = (signed char)38;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)124;
int var_22 = -133254546;
short var_23 = (short)-10470;
unsigned int var_24 = 3882534527U;
unsigned char var_25 = (unsigned char)42;
signed char var_26 = (signed char)-23;
unsigned short var_27 = (unsigned short)52163;
int var_28 = 396363075;
signed char var_29 = (signed char)36;
unsigned int var_30 = 2727995925U;
unsigned int arr_1 [19] [19] ;
short arr_3 [19] ;
unsigned int arr_13 [19] ;
int arr_4 [19] [19] ;
long long int arr_5 [19] ;
unsigned int arr_6 [19] ;
signed char arr_17 [19] [19] ;
_Bool arr_20 [19] [19] ;
unsigned int arr_23 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 3233608164U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-6855;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 4082161954U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 979766267;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 5441434549735396307LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 755083261U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)25;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = 936795167U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
