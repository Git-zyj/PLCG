#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2733610508U;
long long int var_3 = -3491058914003639913LL;
long long int var_4 = 2772952758421381781LL;
int var_5 = -520159413;
unsigned long long int var_7 = 15298284955764813517ULL;
int var_8 = 1685779314;
int var_9 = 1631214812;
unsigned long long int var_10 = 11594579301398751843ULL;
unsigned int var_11 = 2993289373U;
unsigned int var_12 = 3391221377U;
unsigned long long int var_13 = 9556816326971892025ULL;
long long int var_14 = 8391933356424605906LL;
long long int var_15 = -1082822780707726336LL;
long long int var_16 = -2355777215214357594LL;
int zero = 0;
unsigned long long int var_18 = 6872544304686918868ULL;
unsigned int var_19 = 1925563752U;
unsigned long long int var_20 = 13245366937426772592ULL;
unsigned int var_21 = 477362242U;
int arr_0 [21] [21] ;
long long int arr_1 [21] ;
long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -868739855;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -3445786976649604412LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -3737513893628837485LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
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
