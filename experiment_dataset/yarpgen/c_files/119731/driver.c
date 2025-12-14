#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
unsigned char var_1 = (unsigned char)153;
_Bool var_2 = (_Bool)0;
short var_4 = (short)1995;
int var_8 = -327519548;
short var_10 = (short)-9713;
unsigned short var_12 = (unsigned short)50848;
int zero = 0;
signed char var_17 = (signed char)59;
unsigned long long int var_18 = 1892726739623926532ULL;
unsigned long long int var_19 = 8902715100758947ULL;
short var_20 = (short)-13778;
unsigned char var_21 = (unsigned char)240;
long long int var_22 = -3171066453174160637LL;
unsigned long long int arr_1 [10] [10] ;
_Bool arr_9 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 6674052489777823064ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
