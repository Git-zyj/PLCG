#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4134621276496996935LL;
unsigned long long int var_1 = 2673442486259423258ULL;
int var_2 = -1513906702;
short var_5 = (short)-3273;
unsigned long long int var_6 = 10097782218762923965ULL;
unsigned int var_7 = 3961561557U;
unsigned int var_11 = 3213313604U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)31656;
unsigned char var_17 = (unsigned char)6;
unsigned short var_18 = (unsigned short)13887;
unsigned int var_19 = 1910865595U;
_Bool var_20 = (_Bool)0;
unsigned int arr_0 [12] ;
unsigned long long int arr_1 [12] [12] ;
unsigned long long int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1264114673U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 7177697424194361109ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 10962628367393318140ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
