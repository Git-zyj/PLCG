#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6792253078497471598LL;
unsigned long long int var_2 = 7230814407769369846ULL;
signed char var_8 = (signed char)101;
unsigned long long int var_10 = 16711810129631790875ULL;
short var_14 = (short)11354;
int zero = 0;
unsigned short var_20 = (unsigned short)64081;
signed char var_21 = (signed char)13;
signed char var_22 = (signed char)-60;
int var_23 = -1015514438;
unsigned long long int arr_0 [21] ;
long long int arr_1 [21] ;
_Bool arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 13787594982176288342ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -155143468796640320LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
