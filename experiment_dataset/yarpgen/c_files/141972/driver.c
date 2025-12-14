#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17897733047582081522ULL;
unsigned int var_4 = 750267107U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)14030;
short var_9 = (short)-101;
unsigned long long int var_16 = 18019372188373989764ULL;
int zero = 0;
unsigned int var_18 = 4275098857U;
unsigned int var_19 = 1820413201U;
unsigned short var_20 = (unsigned short)42512;
int arr_3 [14] [14] [14] ;
short arr_4 [14] ;
int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -506123927;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)-15584;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 400701935;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
