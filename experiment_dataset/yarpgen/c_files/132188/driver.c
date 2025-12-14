#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-25449;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 18321052150009560431ULL;
int var_13 = 849872147;
unsigned short var_14 = (unsigned short)13702;
unsigned short var_15 = (unsigned short)13253;
unsigned long long int var_17 = 844989782707227494ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)58067;
unsigned long long int var_19 = 16577275843178946541ULL;
unsigned int var_20 = 2799077440U;
long long int var_21 = 2102550303611471713LL;
unsigned short var_22 = (unsigned short)3910;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)50044;
int var_25 = -938015429;
unsigned short var_26 = (unsigned short)53580;
unsigned short var_27 = (unsigned short)47951;
long long int arr_0 [21] ;
long long int arr_1 [21] [21] ;
unsigned long long int arr_2 [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
int arr_6 [21] ;
signed char arr_17 [21] [21] [21] [21] ;
_Bool arr_3 [21] ;
short arr_8 [21] ;
short arr_20 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 5718516205043762043LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -8935110853157276638LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 792724982033654535ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 14932141181841760650ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -1409228419;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (short)-61;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (short)-5851;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
