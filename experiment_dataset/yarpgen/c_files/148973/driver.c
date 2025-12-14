#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11202;
signed char var_1 = (signed char)5;
signed char var_2 = (signed char)-38;
short var_8 = (short)24253;
int zero = 0;
unsigned short var_10 = (unsigned short)28347;
signed char var_11 = (signed char)-47;
unsigned char var_12 = (unsigned char)126;
short var_13 = (short)-15238;
unsigned short var_14 = (unsigned short)6520;
short arr_0 [24] ;
int arr_1 [24] [24] ;
short arr_2 [24] [24] ;
long long int arr_5 [22] ;
int arr_3 [24] ;
unsigned short arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)512 : (short)-20376;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 586339391 : 973065391;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-28361;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -6606242042850159423LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1708069764 : -1604502492;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)7397;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
