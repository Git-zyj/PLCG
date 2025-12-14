#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1195526981089634682LL;
long long int var_5 = 5168753829272294382LL;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)29029;
unsigned short var_11 = (unsigned short)43844;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2202946139U;
int zero = 0;
long long int var_17 = -5237073297239992662LL;
long long int var_18 = 8123275181422719424LL;
unsigned int var_19 = 4047828002U;
_Bool var_20 = (_Bool)0;
int arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned short arr_5 [19] ;
long long int arr_6 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -603752594;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1985075641U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)1457;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 613260595681785269LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
