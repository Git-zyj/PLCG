#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1288789799294006983ULL;
unsigned long long int var_5 = 2519988107041302379ULL;
unsigned int var_6 = 3863723490U;
unsigned long long int var_7 = 18224126218197240405ULL;
unsigned long long int var_9 = 17400910256508288330ULL;
int zero = 0;
int var_10 = -1388052505;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2213087126U;
unsigned int var_13 = 4067514720U;
unsigned long long int var_14 = 10249111907725331572ULL;
unsigned char arr_0 [12] ;
_Bool arr_1 [12] [12] ;
unsigned long long int arr_9 [11] ;
long long int arr_4 [12] ;
int arr_16 [11] ;
unsigned long long int arr_17 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 8751408903904802440ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 7530588066006246169LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 615852109 : -65969718;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 2086720766630817332ULL : 4593990058997287079ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
