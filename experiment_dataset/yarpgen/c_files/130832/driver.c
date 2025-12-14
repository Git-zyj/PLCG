#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15680;
unsigned short var_2 = (unsigned short)32517;
unsigned char var_4 = (unsigned char)229;
signed char var_9 = (signed char)-116;
unsigned short var_12 = (unsigned short)31697;
int zero = 0;
int var_14 = -1044869959;
short var_15 = (short)24484;
unsigned short var_16 = (unsigned short)54930;
unsigned short var_17 = (unsigned short)36094;
signed char var_18 = (signed char)6;
unsigned short var_19 = (unsigned short)308;
int var_20 = 964739593;
long long int var_21 = -2302416932684305844LL;
unsigned short var_22 = (unsigned short)31896;
unsigned short var_23 = (unsigned short)65241;
signed char arr_4 [19] ;
short arr_7 [19] [19] ;
unsigned long long int arr_8 [19] ;
signed char arr_3 [11] ;
unsigned char arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (short)17192;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 7525715668144856270ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-6 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)117;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
