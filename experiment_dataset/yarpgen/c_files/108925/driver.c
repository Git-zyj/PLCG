#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37035;
int var_1 = -574310464;
unsigned char var_3 = (unsigned char)195;
unsigned long long int var_4 = 15654977829643812103ULL;
int var_5 = 1045382264;
_Bool var_8 = (_Bool)0;
short var_9 = (short)5612;
_Bool var_12 = (_Bool)1;
long long int var_14 = -6899219362328665273LL;
unsigned int var_18 = 186998018U;
signed char var_19 = (signed char)-96;
int zero = 0;
unsigned int var_20 = 1921120034U;
unsigned short var_21 = (unsigned short)5495;
unsigned short var_22 = (unsigned short)35087;
unsigned long long int var_23 = 8791705673397129681ULL;
unsigned int var_24 = 2038969146U;
signed char var_25 = (signed char)110;
unsigned int var_26 = 3795580939U;
unsigned short var_27 = (unsigned short)19911;
unsigned long long int var_28 = 12198699256249834289ULL;
unsigned char var_29 = (unsigned char)67;
unsigned int arr_0 [19] [19] ;
signed char arr_1 [19] ;
long long int arr_2 [17] ;
unsigned long long int arr_3 [17] ;
short arr_10 [17] [17] [17] ;
short arr_11 [17] [17] ;
signed char arr_13 [17] [17] ;
short arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 2602725882U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -1195463630533838096LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 7709019760313117715ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)19721;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (short)857;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)2422;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
