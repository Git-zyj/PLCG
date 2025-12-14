#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3434027776154355827LL;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 924881851U;
unsigned int var_9 = 2471731868U;
unsigned long long int var_10 = 13850286819737873241ULL;
unsigned int var_13 = 1413799039U;
int zero = 0;
unsigned long long int var_16 = 3800080245838558925ULL;
unsigned int var_17 = 1220547954U;
unsigned long long int arr_1 [22] ;
_Bool arr_2 [22] [22] ;
int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 12141924989439971365ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 880271368 : -905861490;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
