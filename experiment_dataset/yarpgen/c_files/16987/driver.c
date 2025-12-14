#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 92937583;
_Bool var_6 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)13849;
signed char var_17 = (signed char)-38;
long long int var_18 = -7445936550237300047LL;
int zero = 0;
unsigned char var_19 = (unsigned char)128;
unsigned char var_20 = (unsigned char)67;
int var_21 = 1566465475;
unsigned long long int var_22 = 2307826771701822565ULL;
unsigned long long int arr_0 [17] ;
unsigned short arr_2 [17] ;
_Bool arr_3 [17] ;
unsigned char arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 13237389134611301351ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)7140;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)44;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
