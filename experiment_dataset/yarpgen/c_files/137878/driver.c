#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2419509368U;
short var_5 = (short)3034;
unsigned int var_6 = 2069512830U;
unsigned long long int var_7 = 18330032719341551419ULL;
int zero = 0;
unsigned int var_16 = 3241955152U;
unsigned long long int var_17 = 5750360435503929233ULL;
int var_18 = -1495444894;
unsigned int var_19 = 431998459U;
short var_20 = (short)-30234;
unsigned long long int var_21 = 8772254485796971669ULL;
int var_22 = -2095577044;
unsigned long long int var_23 = 14013546121436320325ULL;
unsigned int arr_0 [14] ;
long long int arr_1 [14] [14] ;
int arr_2 [14] [14] ;
int arr_4 [14] ;
long long int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3229135355U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 5896658966877231171LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 137629492;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -2032136678;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 6313260794026153601LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
