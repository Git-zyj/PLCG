#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
unsigned char var_4 = (unsigned char)197;
unsigned long long int var_7 = 9356947866084096467ULL;
unsigned int var_11 = 4281439803U;
int zero = 0;
int var_12 = 203159566;
unsigned int var_13 = 3994378825U;
long long int var_14 = 5047204048049911783LL;
int var_15 = -171159835;
unsigned long long int var_16 = 8333419466844309981ULL;
unsigned int var_17 = 54835681U;
unsigned char var_18 = (unsigned char)55;
long long int arr_0 [14] ;
unsigned int arr_1 [14] [14] ;
unsigned int arr_2 [14] [14] ;
unsigned char arr_8 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -4788614398847462594LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 2218272343U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 809035198U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)54 : (unsigned char)53;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
