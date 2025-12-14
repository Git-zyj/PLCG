#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9041284258835871919ULL;
short var_1 = (short)-19833;
unsigned int var_2 = 2533105772U;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)64169;
int zero = 0;
unsigned short var_11 = (unsigned short)45439;
unsigned int var_12 = 1679394947U;
unsigned int var_13 = 148496299U;
unsigned int var_14 = 2200269958U;
long long int var_15 = 6876666064732693643LL;
unsigned long long int arr_0 [24] ;
signed char arr_1 [24] ;
short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 10110751439463474437ULL : 6964730072130322120ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)3713 : (short)28439;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
