#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)127;
unsigned int var_3 = 1455968317U;
unsigned long long int var_4 = 1679317754505134469ULL;
long long int var_5 = -3088056942568027283LL;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-56;
int zero = 0;
int var_14 = -515695054;
unsigned int var_15 = 846788636U;
long long int var_16 = 898224092248320944LL;
short var_17 = (short)324;
unsigned char var_18 = (unsigned char)82;
signed char var_19 = (signed char)-92;
unsigned long long int arr_0 [18] ;
unsigned char arr_2 [18] [18] ;
unsigned int arr_5 [18] ;
signed char arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 13974675858355193408ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 850061050U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)-4;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
