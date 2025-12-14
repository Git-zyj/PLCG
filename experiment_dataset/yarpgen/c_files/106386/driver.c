#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1965585962621352495LL;
unsigned short var_1 = (unsigned short)44486;
unsigned int var_3 = 881077800U;
unsigned int var_4 = 2378443648U;
unsigned short var_5 = (unsigned short)58085;
unsigned char var_6 = (unsigned char)240;
unsigned short var_7 = (unsigned short)7534;
unsigned long long int var_8 = 2539677734819128072ULL;
unsigned char var_9 = (unsigned char)236;
signed char var_10 = (signed char)16;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-87;
signed char var_13 = (signed char)75;
unsigned int var_14 = 3892386466U;
unsigned long long int var_15 = 11161677454366588078ULL;
int var_16 = 1621960683;
unsigned int arr_1 [14] ;
unsigned short arr_2 [14] ;
unsigned char arr_4 [18] [18] ;
long long int arr_5 [18] [18] ;
_Bool arr_3 [14] [14] ;
long long int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2824618165U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)35577;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -4837045331405709245LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = -3106560908733907881LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
