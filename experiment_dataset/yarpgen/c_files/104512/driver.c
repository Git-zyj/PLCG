#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
signed char var_1 = (signed char)11;
int var_2 = -682451904;
unsigned short var_5 = (unsigned short)41569;
unsigned int var_6 = 3418527020U;
signed char var_7 = (signed char)124;
unsigned int var_8 = 2379968174U;
long long int var_9 = 2204332187240511678LL;
unsigned char var_10 = (unsigned char)23;
int zero = 0;
unsigned char var_12 = (unsigned char)177;
short var_13 = (short)22215;
int var_14 = -1579821808;
signed char var_15 = (signed char)118;
short var_16 = (short)8716;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)39;
unsigned long long int arr_0 [18] [18] ;
signed char arr_1 [18] ;
unsigned long long int arr_2 [18] ;
unsigned char arr_3 [18] [18] [18] ;
int arr_4 [18] [18] [18] ;
unsigned int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 9764649410592448345ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5792060932609035578ULL : 1921224887893600640ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)137 : (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1566944442;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2340391141U : 3789015011U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
