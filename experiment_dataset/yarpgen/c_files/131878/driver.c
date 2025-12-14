#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22755;
short var_2 = (short)-4376;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 5914837654379132454ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)27828;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 796828993U;
long long int var_9 = 4434520913786944697LL;
_Bool var_10 = (_Bool)0;
int var_11 = 1118865243;
signed char var_12 = (signed char)-98;
int var_13 = -874556203;
signed char var_14 = (signed char)38;
unsigned long long int var_15 = 17193559519196077903ULL;
unsigned long long int var_16 = 15802878257213077645ULL;
int zero = 0;
int var_17 = 1141073010;
unsigned short var_18 = (unsigned short)64667;
unsigned char var_19 = (unsigned char)233;
unsigned short var_20 = (unsigned short)15837;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 307891585U;
long long int var_23 = -2357459628912315113LL;
long long int var_24 = 3188549730501263610LL;
unsigned int var_25 = 1800789033U;
long long int var_26 = 4567011655866146705LL;
unsigned int var_27 = 2927181416U;
unsigned short var_28 = (unsigned short)1410;
unsigned int var_29 = 4072166755U;
unsigned long long int var_30 = 3673818480970444620ULL;
int var_31 = -1924432;
long long int arr_0 [17] ;
signed char arr_2 [17] [17] ;
unsigned int arr_3 [17] [17] ;
_Bool arr_8 [17] [17] ;
long long int arr_9 [17] [17] ;
unsigned int arr_18 [25] ;
short arr_22 [21] ;
long long int arr_5 [17] ;
signed char arr_6 [17] [17] [17] ;
unsigned int arr_7 [17] [17] ;
signed char arr_15 [17] [17] ;
unsigned long long int arr_16 [17] [17] ;
short arr_24 [21] [21] ;
_Bool arr_25 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 4326633763776844587LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-47 : (signed char)87;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 1623487726U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 6677676698281710758LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = 2943954757U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (short)30444;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2193201714085497149LL : -5582249371004610707LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-95 : (signed char)119;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 2727158154U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = 13049569316328586214ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-963 : (short)-31886;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
