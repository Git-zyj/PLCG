#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1487009892;
short var_4 = (short)19264;
signed char var_6 = (signed char)50;
unsigned long long int var_8 = 9010244472206929690ULL;
signed char var_10 = (signed char)-98;
int zero = 0;
unsigned char var_11 = (unsigned char)101;
_Bool var_12 = (_Bool)1;
short var_13 = (short)261;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3394097313U;
long long int var_16 = 7473141492756160978LL;
long long int arr_4 [14] ;
short arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 7126318063049420475LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-32500;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
