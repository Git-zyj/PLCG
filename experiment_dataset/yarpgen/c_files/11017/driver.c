#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10164034487496920376ULL;
unsigned short var_2 = (unsigned short)10031;
unsigned int var_3 = 596079707U;
unsigned char var_5 = (unsigned char)97;
unsigned long long int var_6 = 379892398467828124ULL;
long long int var_8 = -4658102161458350306LL;
int zero = 0;
unsigned short var_10 = (unsigned short)21343;
long long int var_11 = 5554300133936478003LL;
int var_12 = 1110432037;
unsigned long long int var_13 = 3463683821956110143ULL;
unsigned short var_14 = (unsigned short)15211;
signed char var_15 = (signed char)5;
int var_16 = 612941288;
unsigned short var_17 = (unsigned short)54296;
unsigned short arr_0 [22] ;
unsigned char arr_1 [22] [22] ;
unsigned char arr_3 [22] ;
unsigned short arr_12 [20] ;
unsigned char arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63506 : (unsigned short)25937;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)155 : (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (unsigned short)58497;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)190 : (unsigned char)164;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
