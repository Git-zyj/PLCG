#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
unsigned long long int var_2 = 17215095255872714952ULL;
long long int var_3 = 8069838148417706069LL;
_Bool var_4 = (_Bool)0;
long long int var_7 = 2534118772599550741LL;
unsigned long long int var_9 = 14269311908220934519ULL;
int var_10 = 1746445673;
int zero = 0;
unsigned char var_14 = (unsigned char)108;
signed char var_15 = (signed char)-33;
long long int var_16 = -4474923241009657762LL;
long long int var_17 = 4045405069734820568LL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1695984498U;
unsigned char var_20 = (unsigned char)69;
int var_21 = -560214368;
long long int var_22 = 5156345272070232643LL;
unsigned int arr_0 [15] [15] ;
signed char arr_2 [15] [15] ;
short arr_3 [15] ;
_Bool arr_8 [14] ;
_Bool arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 2677515119U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)29491;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
