#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9098508763737638224LL;
unsigned char var_1 = (unsigned char)124;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 8665859374554080065ULL;
int var_8 = -1685146222;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-45;
int var_13 = 1182871017;
long long int var_14 = 438896270428077719LL;
unsigned char var_15 = (unsigned char)171;
unsigned long long int var_16 = 5281812404471388271ULL;
signed char var_17 = (signed char)-74;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-13787;
int var_20 = 457335682;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
long long int arr_1 [20] [20] ;
unsigned short arr_3 [20] ;
long long int arr_4 [20] ;
unsigned int arr_5 [20] ;
short arr_7 [20] [20] [20] [20] ;
signed char arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 8280238418860445277LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)44275;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -5230450623062917769LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 2582285674U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)7702;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (signed char)-75;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
