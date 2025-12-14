#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28718;
unsigned int var_1 = 3789511197U;
short var_3 = (short)-16989;
unsigned short var_6 = (unsigned short)18040;
signed char var_9 = (signed char)41;
signed char var_11 = (signed char)-55;
int var_12 = -369599065;
unsigned int var_13 = 1122223798U;
unsigned short var_15 = (unsigned short)65211;
_Bool var_17 = (_Bool)0;
signed char var_19 = (signed char)-117;
int zero = 0;
unsigned short var_20 = (unsigned short)30741;
short var_21 = (short)15544;
unsigned int var_22 = 1236117667U;
unsigned int var_23 = 2958273634U;
int var_24 = 916736070;
short var_25 = (short)8797;
long long int var_26 = -8111987282819235758LL;
unsigned int var_27 = 927491014U;
_Bool var_28 = (_Bool)1;
unsigned short var_29 = (unsigned short)50635;
int arr_0 [24] [24] ;
unsigned short arr_1 [24] ;
signed char arr_2 [24] ;
int arr_3 [17] ;
int arr_4 [17] ;
long long int arr_5 [17] [17] [17] ;
long long int arr_6 [17] [17] [17] ;
unsigned short arr_9 [25] ;
_Bool arr_10 [25] [25] ;
unsigned short arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -1025848718;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)42468;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1291850847;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -1138267080;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -6950036854810344889LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 9015170973956938082LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned short)46280;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)21821;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
