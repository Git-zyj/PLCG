#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 342322864U;
unsigned int var_3 = 1649834903U;
unsigned long long int var_5 = 17680191152869353933ULL;
unsigned long long int var_7 = 13855972145774562898ULL;
int zero = 0;
unsigned long long int var_10 = 1083383578189621356ULL;
signed char var_11 = (signed char)-29;
unsigned char var_12 = (unsigned char)170;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)32709;
signed char var_15 = (signed char)50;
unsigned short var_16 = (unsigned short)24626;
unsigned short var_17 = (unsigned short)32928;
unsigned int var_18 = 346072867U;
unsigned int var_19 = 3591269320U;
long long int var_20 = -2501522807794310047LL;
unsigned int arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_2 [22] ;
unsigned int arr_3 [22] ;
unsigned short arr_4 [22] ;
unsigned short arr_5 [22] ;
unsigned char arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 957342066U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1832718210248406216ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 16284582699766332067ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3613941227U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50626 : (unsigned short)39590;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)21451 : (unsigned short)52548;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)149;
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
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
