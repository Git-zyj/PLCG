#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-6;
unsigned short var_6 = (unsigned short)6172;
unsigned char var_7 = (unsigned char)214;
int var_8 = 1257979655;
long long int var_9 = 2463433357576305047LL;
int zero = 0;
long long int var_10 = -4396022295004223595LL;
unsigned char var_11 = (unsigned char)19;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)236;
unsigned int var_14 = 957328612U;
long long int var_15 = -1307179750184019560LL;
unsigned long long int arr_1 [23] ;
int arr_2 [23] ;
unsigned char arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 7429273799911320101ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -217811759;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)245;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
