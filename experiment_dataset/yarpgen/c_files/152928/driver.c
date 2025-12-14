#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6823536420707028593ULL;
unsigned int var_8 = 1079586976U;
int zero = 0;
unsigned long long int var_10 = 13399590096216810126ULL;
unsigned int var_11 = 1089589738U;
unsigned long long int var_12 = 15501755255977901941ULL;
unsigned long long int var_13 = 8514283830756770257ULL;
unsigned int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1661899083U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 15961226068155557826ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 10962361416448971910ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
