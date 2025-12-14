#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-7;
unsigned char var_4 = (unsigned char)22;
unsigned short var_6 = (unsigned short)50270;
unsigned long long int var_7 = 13739152902691995253ULL;
signed char var_10 = (signed char)-43;
unsigned int var_11 = 370780679U;
signed char var_12 = (signed char)-27;
int zero = 0;
short var_15 = (short)28579;
unsigned long long int var_16 = 6174976492087759945ULL;
unsigned long long int var_17 = 14885182896769411134ULL;
signed char arr_0 [23] ;
long long int arr_1 [23] [23] ;
int arr_2 [23] [23] [23] ;
long long int arr_3 [23] [23] ;
unsigned char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 3814104001140497147LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1395371798;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -1849890188030044077LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)86;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
