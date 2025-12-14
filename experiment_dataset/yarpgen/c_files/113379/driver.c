#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned long long int var_1 = 8549051574612012846ULL;
unsigned int var_2 = 2366883940U;
unsigned long long int var_4 = 17813585289534431791ULL;
unsigned int var_5 = 402960880U;
unsigned char var_6 = (unsigned char)228;
int var_7 = 2029419955;
unsigned long long int var_8 = 13463709222059602551ULL;
unsigned int var_9 = 3144246722U;
unsigned int var_10 = 3395105440U;
unsigned int var_11 = 1874840523U;
unsigned long long int var_12 = 16425354348764508266ULL;
int zero = 0;
unsigned int var_13 = 2641408387U;
unsigned char var_14 = (unsigned char)192;
unsigned long long int arr_0 [11] [11] ;
unsigned long long int arr_2 [11] [11] ;
int arr_3 [11] ;
int arr_4 [11] [11] ;
unsigned char arr_5 [11] ;
int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 6002910094592859176ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 15722916676183961735ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -2122896762;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 329589884 : 1020448066;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)15 : (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -745665596 : -35629884;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
