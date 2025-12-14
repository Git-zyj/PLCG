#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2753159742U;
long long int var_3 = -5044691241960978983LL;
_Bool var_4 = (_Bool)0;
long long int var_7 = -4683882182514918779LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_20 = 3667968617469079122LL;
unsigned long long int var_21 = 15848529216698937557ULL;
short var_22 = (short)-29430;
unsigned long long int var_23 = 3798012705547833770ULL;
unsigned long long int arr_0 [24] ;
short arr_3 [24] [24] ;
_Bool arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 15388454274898113808ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-24671;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
