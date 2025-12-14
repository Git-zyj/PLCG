#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41972;
short var_2 = (short)-7632;
unsigned long long int var_5 = 14442956843232669203ULL;
int var_7 = -263667824;
_Bool var_10 = (_Bool)1;
long long int var_11 = -7455276518513225605LL;
int zero = 0;
unsigned short var_18 = (unsigned short)16384;
short var_19 = (short)-32541;
int var_20 = -1800886689;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)140;
unsigned long long int var_23 = 14820736881654831952ULL;
short arr_4 [22] [22] ;
signed char arr_5 [22] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)19092;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-109;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
