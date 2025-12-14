#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 999806780;
int var_2 = 2027810356;
unsigned short var_3 = (unsigned short)46381;
int var_4 = 1535114677;
int var_5 = 1523912622;
unsigned char var_6 = (unsigned char)18;
unsigned short var_8 = (unsigned short)6894;
unsigned char var_10 = (unsigned char)29;
int zero = 0;
unsigned short var_13 = (unsigned short)4286;
int var_14 = 1710245037;
int var_15 = 1095872097;
int arr_10 [15] ;
unsigned char arr_4 [15] ;
int arr_11 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 735935147;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)207 : (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 1707962530 : 1772157524;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
