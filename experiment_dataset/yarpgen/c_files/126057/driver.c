#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1823258399U;
unsigned long long int var_3 = 13828923395774355109ULL;
long long int var_6 = -1436458182786559486LL;
long long int var_8 = -8012490395437726639LL;
unsigned int var_9 = 3928082934U;
int zero = 0;
unsigned int var_10 = 2360755912U;
long long int var_11 = 2237885172936549806LL;
long long int var_12 = -5948744282635359507LL;
unsigned long long int var_13 = 7135362621438116402ULL;
unsigned int var_14 = 1902725296U;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)2;
short arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned int arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)18256;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 4146970398U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 3738507406U : 50598059U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
