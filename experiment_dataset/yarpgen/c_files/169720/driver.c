#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18831;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 4053873616U;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)45046;
int var_12 = -993332596;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 6008677813470982003ULL;
unsigned short var_21 = (unsigned short)14893;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1534438898U;
unsigned long long int var_24 = 15583961767924847218ULL;
unsigned int var_25 = 3407644965U;
unsigned char arr_0 [18] [18] ;
int arr_1 [18] ;
short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1682317296;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)27126;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
