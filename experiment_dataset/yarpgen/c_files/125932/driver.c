#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6950703255548986047LL;
_Bool var_3 = (_Bool)1;
int var_6 = 1352972539;
unsigned long long int var_7 = 8385646502365267595ULL;
signed char var_8 = (signed char)-26;
unsigned int var_10 = 3403401024U;
int zero = 0;
int var_12 = 2013989402;
unsigned short var_13 = (unsigned short)755;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5611328149395266152LL;
unsigned short var_16 = (unsigned short)17914;
long long int arr_12 [22] [22] ;
signed char arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = -4867800293207376654LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (signed char)25;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
