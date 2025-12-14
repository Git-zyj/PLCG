#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51385;
int var_2 = -1868525246;
long long int var_5 = -1827570697613777713LL;
int var_9 = 1134143984;
unsigned short var_10 = (unsigned short)40240;
int zero = 0;
int var_12 = -613803655;
short var_13 = (short)-18845;
unsigned char var_14 = (unsigned char)73;
long long int var_15 = -552512245904912093LL;
unsigned char var_16 = (unsigned char)213;
int arr_5 [23] ;
_Bool arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -299821948;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
