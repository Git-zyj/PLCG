#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
unsigned char var_4 = (unsigned char)167;
short var_6 = (short)-20046;
unsigned char var_8 = (unsigned char)135;
signed char var_9 = (signed char)-120;
unsigned long long int var_10 = 6932205406121948605ULL;
unsigned long long int var_11 = 13038216268749129153ULL;
unsigned long long int var_13 = 16508793171704069576ULL;
long long int var_16 = 6813961568915858348LL;
int zero = 0;
long long int var_17 = -7607772234596089352LL;
int var_18 = -969870224;
signed char var_19 = (signed char)32;
short var_20 = (short)9955;
short var_21 = (short)-18837;
_Bool var_22 = (_Bool)1;
signed char arr_0 [10] ;
unsigned int arr_5 [10] [10] [10] [10] ;
long long int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 3013182550U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 8879229122296930167LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
