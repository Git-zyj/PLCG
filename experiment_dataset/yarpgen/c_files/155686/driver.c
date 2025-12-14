#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9088962684993096967LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)29573;
signed char var_4 = (signed char)92;
unsigned long long int var_5 = 2292825760437605927ULL;
signed char var_7 = (signed char)32;
unsigned char var_10 = (unsigned char)161;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 3676606601473016344LL;
short var_16 = (short)-8758;
signed char var_17 = (signed char)-98;
unsigned short var_18 = (unsigned short)56099;
unsigned long long int var_19 = 10461804324150016490ULL;
unsigned short var_20 = (unsigned short)36074;
_Bool var_21 = (_Bool)0;
unsigned char arr_3 [22] ;
unsigned char arr_5 [22] [22] [22] ;
unsigned short arr_6 [22] [22] [22] ;
short arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)41199;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (short)-27580;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
