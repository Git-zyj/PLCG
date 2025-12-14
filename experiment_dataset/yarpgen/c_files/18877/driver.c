#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1182703116122279330LL;
long long int var_6 = 1375216392532358395LL;
unsigned int var_13 = 2254931690U;
int zero = 0;
unsigned long long int var_16 = 1660600229689354790ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 2813049049387876236ULL;
unsigned int var_19 = 4128913970U;
unsigned int arr_0 [15] ;
short arr_1 [15] ;
unsigned long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3703517959U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)13928;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 12466652495081423069ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
