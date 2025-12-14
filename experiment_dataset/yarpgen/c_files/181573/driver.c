#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36357;
unsigned short var_2 = (unsigned short)43144;
unsigned long long int var_4 = 14283639188799387617ULL;
unsigned short var_6 = (unsigned short)37121;
unsigned long long int var_7 = 6599144230260047946ULL;
unsigned short var_16 = (unsigned short)27901;
unsigned short var_18 = (unsigned short)33657;
int zero = 0;
unsigned short var_19 = (unsigned short)60635;
unsigned long long int var_20 = 5023931223657561991ULL;
unsigned short var_21 = (unsigned short)42644;
unsigned short var_22 = (unsigned short)41995;
unsigned long long int var_23 = 9853100869739017966ULL;
unsigned short var_24 = (unsigned short)12072;
unsigned short var_25 = (unsigned short)43236;
unsigned long long int arr_1 [22] [22] ;
unsigned short arr_3 [17] [17] ;
unsigned short arr_4 [17] ;
unsigned long long int arr_6 [10] [10] ;
unsigned short arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 481071974180282803ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)48527;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60818 : (unsigned short)30668;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 3099016162209155117ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)14010 : (unsigned short)61588;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
