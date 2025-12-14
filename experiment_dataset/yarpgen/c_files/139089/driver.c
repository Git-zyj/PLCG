#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 934683527;
signed char var_7 = (signed char)38;
unsigned long long int var_8 = 3992022164525259636ULL;
unsigned long long int var_9 = 5669010145479562150ULL;
long long int var_10 = 1442009212008912584LL;
unsigned short var_11 = (unsigned short)61707;
int zero = 0;
long long int var_12 = 6910267882692967850LL;
signed char var_13 = (signed char)60;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 15093696097551326683ULL;
unsigned long long int arr_2 [20] ;
int arr_3 [20] [20] ;
unsigned long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 13114967745005827857ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = -1258312228;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 14579087039397746878ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
