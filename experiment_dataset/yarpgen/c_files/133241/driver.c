#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)224;
unsigned int var_3 = 914085614U;
signed char var_10 = (signed char)47;
short var_12 = (short)25314;
unsigned long long int var_14 = 9886303920678135368ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)148;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-28;
unsigned long long int var_21 = 5096140450917933430ULL;
unsigned int var_22 = 2738348253U;
_Bool var_23 = (_Bool)0;
_Bool arr_1 [23] [23] ;
short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-23221;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
