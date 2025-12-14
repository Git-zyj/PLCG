#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)773;
short var_5 = (short)30539;
short var_6 = (short)-19441;
unsigned short var_7 = (unsigned short)43119;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 5024954680100835148ULL;
_Bool var_11 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 732407067;
short var_18 = (short)-1240;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)16563;
int var_21 = -779274802;
unsigned long long int var_22 = 5817975999913298904ULL;
long long int var_23 = 2952991277292308640LL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
long long int arr_0 [10] [10] ;
_Bool arr_2 [10] [10] ;
unsigned long long int arr_3 [10] [10] ;
int arr_13 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 8801861567295807233LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 15554700979220375539ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -304693262;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
