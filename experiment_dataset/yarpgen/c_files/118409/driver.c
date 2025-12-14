#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3908061847U;
int var_3 = 872209052;
signed char var_4 = (signed char)-45;
signed char var_5 = (signed char)-33;
unsigned long long int var_6 = 3581851201182879484ULL;
int var_7 = 1025204523;
int var_9 = 457308519;
unsigned int var_10 = 1100358158U;
long long int var_11 = -6587688334574913483LL;
long long int var_12 = -8746487223852893794LL;
unsigned short var_13 = (unsigned short)11594;
signed char var_14 = (signed char)-125;
unsigned short var_16 = (unsigned short)11731;
int zero = 0;
unsigned short var_17 = (unsigned short)34766;
int var_18 = 1828979462;
unsigned long long int var_19 = 14462306416303659102ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-52;
int var_22 = -589320128;
unsigned char var_23 = (unsigned char)19;
signed char var_24 = (signed char)-125;
signed char var_25 = (signed char)-13;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 18002572776222357379ULL;
_Bool var_28 = (_Bool)1;
int arr_0 [25] ;
signed char arr_1 [25] ;
unsigned int arr_8 [25] [25] ;
unsigned long long int arr_10 [25] ;
unsigned long long int arr_11 [25] [25] ;
unsigned int arr_12 [25] ;
short arr_2 [25] ;
int arr_3 [25] [25] ;
unsigned short arr_6 [25] [25] ;
unsigned short arr_9 [25] ;
int arr_16 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 110850320;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 2985838227U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 709371597681711773ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = 15133342345493317286ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 3910697590U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)18814;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -1869149779;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)58519;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned short)13899;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 352436678 : 209915958;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
