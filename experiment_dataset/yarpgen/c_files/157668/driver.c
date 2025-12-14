#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2049;
unsigned short var_6 = (unsigned short)45132;
long long int var_7 = -1691308441183541576LL;
int var_10 = -1396873862;
long long int var_15 = -3414586691639039527LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)5472;
unsigned int var_20 = 355757611U;
unsigned short var_21 = (unsigned short)26390;
unsigned int var_22 = 3162785082U;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)64024;
unsigned short var_26 = (unsigned short)57484;
long long int arr_1 [17] ;
unsigned int arr_2 [17] [17] ;
long long int arr_8 [17] [17] [17] ;
unsigned long long int arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1891370476803995093LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 1130350411U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -146967962479781661LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 303072675447220852ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
