#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_5 = -6603692287801972426LL;
unsigned int var_7 = 2854946267U;
unsigned long long int var_8 = 1706615260566255760ULL;
unsigned short var_11 = (unsigned short)4657;
long long int var_14 = 6405978755671013826LL;
unsigned long long int var_15 = 12217204091186380247ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)53930;
long long int var_19 = 4073106996973825064LL;
int var_20 = -2040288980;
long long int var_21 = -1085238119552231069LL;
signed char var_22 = (signed char)-27;
short var_23 = (short)8787;
unsigned short var_24 = (unsigned short)53576;
long long int var_25 = 411643994201474549LL;
signed char arr_0 [17] ;
unsigned char arr_5 [23] [23] ;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-69 : (signed char)-6;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 980732326489626660LL : 608743511779123976LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
