#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)34;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3400313324U;
int zero = 0;
long long int var_20 = -3687198500743589432LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = -5894102529479772811LL;
signed char var_23 = (signed char)14;
int var_24 = 1445855407;
short var_25 = (short)32239;
_Bool var_26 = (_Bool)1;
short var_27 = (short)31232;
_Bool var_28 = (_Bool)1;
unsigned int arr_0 [22] ;
signed char arr_2 [22] ;
short arr_4 [25] [25] ;
_Bool arr_5 [25] ;
int arr_7 [25] ;
unsigned long long int arr_11 [25] ;
_Bool arr_3 [22] ;
unsigned int arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1234904253U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-80;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -496967678;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 6393496851994133002ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 3431977012U;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
