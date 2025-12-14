#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
short var_6 = (short)-9806;
unsigned int var_9 = 1222887430U;
unsigned int var_14 = 165318050U;
unsigned long long int var_15 = 13624830915516659840ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)21586;
signed char var_18 = (signed char)-83;
_Bool var_19 = (_Bool)0;
long long int var_20 = 7180297322995329877LL;
short arr_1 [11] ;
_Bool arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)10114;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
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
