#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
int var_2 = 897843007;
unsigned char var_3 = (unsigned char)149;
unsigned char var_4 = (unsigned char)228;
short var_5 = (short)-27360;
short var_6 = (short)22476;
unsigned long long int var_7 = 1064031885351025273ULL;
int var_8 = -45589588;
unsigned char var_10 = (unsigned char)187;
signed char var_11 = (signed char)-21;
int zero = 0;
short var_12 = (short)-25682;
signed char var_13 = (signed char)-45;
signed char var_14 = (signed char)87;
int var_15 = -516567001;
unsigned short var_16 = (unsigned short)46795;
int var_17 = 1384332534;
int var_18 = 799198214;
signed char arr_0 [20] ;
signed char arr_1 [20] ;
unsigned char arr_2 [20] ;
short arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)4146 : (short)17145;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
