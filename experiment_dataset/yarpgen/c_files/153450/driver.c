#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 17563901203468668227ULL;
unsigned int var_14 = 1055321337U;
int zero = 0;
unsigned int var_16 = 401604519U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 18009675089586544160ULL;
signed char arr_0 [21] [21] ;
long long int arr_1 [21] ;
signed char arr_2 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)29 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 5587411454588459755LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-118;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
