#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3902576738U;
short var_2 = (short)18758;
unsigned int var_3 = 3976494975U;
unsigned short var_4 = (unsigned short)57583;
short var_12 = (short)-21491;
unsigned short var_13 = (unsigned short)63571;
unsigned short var_15 = (unsigned short)14158;
unsigned long long int var_16 = 4475297544414901194ULL;
int zero = 0;
unsigned long long int var_17 = 2630115033205152783ULL;
unsigned int var_18 = 1620114666U;
int var_19 = 924292132;
unsigned char var_20 = (unsigned char)216;
short var_21 = (short)20847;
unsigned short var_22 = (unsigned short)47028;
long long int arr_0 [24] ;
_Bool arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
unsigned short arr_3 [24] ;
int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -2515996115462246899LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1936162318852471442ULL : 18302856119061438486ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33032 : (unsigned short)38125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1546050399 : -324215645;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
