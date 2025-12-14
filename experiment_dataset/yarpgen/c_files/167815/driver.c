#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25143;
long long int var_2 = 3905954038582722681LL;
unsigned short var_3 = (unsigned short)57013;
int var_6 = 1856560425;
signed char var_7 = (signed char)-3;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)4166;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)160;
unsigned int var_13 = 1180993540U;
unsigned int var_14 = 91113105U;
short var_15 = (short)10358;
signed char var_16 = (signed char)-127;
_Bool var_17 = (_Bool)0;
_Bool arr_2 [24] ;
unsigned long long int arr_4 [24] ;
signed char arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 3628022808245541764ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (signed char)93;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
