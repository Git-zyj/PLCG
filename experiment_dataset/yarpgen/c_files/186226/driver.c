#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)62;
long long int var_3 = -3792878487379830576LL;
signed char var_4 = (signed char)4;
unsigned char var_5 = (unsigned char)141;
long long int var_6 = -2389901175696627601LL;
unsigned char var_10 = (unsigned char)122;
unsigned short var_11 = (unsigned short)15705;
long long int var_12 = 2566027736402299479LL;
unsigned int var_14 = 2063949870U;
long long int var_15 = -1563214311237306470LL;
int zero = 0;
unsigned int var_18 = 3233353219U;
long long int var_19 = 1967439269726223109LL;
unsigned short var_20 = (unsigned short)44823;
long long int var_21 = -1604518165725033786LL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 15939286835983261131ULL;
unsigned int arr_0 [17] [17] ;
unsigned char arr_1 [17] [17] ;
unsigned int arr_3 [17] [17] [17] ;
unsigned char arr_8 [14] ;
unsigned char arr_4 [17] [17] ;
long long int arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 722378176U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2352767127U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3490651326265107191LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
