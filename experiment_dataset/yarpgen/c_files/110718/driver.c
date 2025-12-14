#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1914026775;
unsigned int var_3 = 3757542255U;
unsigned int var_10 = 3942185790U;
_Bool var_11 = (_Bool)0;
short var_16 = (short)-20917;
int zero = 0;
int var_17 = -1695313753;
long long int var_18 = -2746306439435513692LL;
long long int var_19 = -7574088931894615095LL;
short arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
unsigned short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-5895;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 11669131016069763480ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)25973;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
