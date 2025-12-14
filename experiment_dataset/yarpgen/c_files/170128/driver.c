#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3503498769212110192ULL;
unsigned long long int var_2 = 737675527035665144ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)54748;
_Bool var_7 = (_Bool)1;
int var_8 = 1391902281;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)44118;
unsigned char var_15 = (unsigned char)251;
unsigned short var_16 = (unsigned short)62155;
int zero = 0;
int var_17 = 702103689;
short var_18 = (short)4373;
unsigned int var_19 = 507149006U;
short var_20 = (short)-30013;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)46074;
unsigned long long int var_23 = 4137868210777424085ULL;
signed char var_24 = (signed char)-30;
short var_25 = (short)6121;
int arr_2 [10] [10] ;
unsigned char arr_8 [24] ;
unsigned short arr_14 [24] [24] [24] [24] ;
unsigned short arr_21 [24] [24] [24] ;
_Bool arr_6 [10] ;
unsigned short arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1508364645;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)8620;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned short)49834;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)44754;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
