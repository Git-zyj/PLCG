#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3047314008U;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)23675;
unsigned int var_10 = 3055642760U;
unsigned long long int var_12 = 16801414105208529638ULL;
unsigned short var_13 = (unsigned short)24644;
int zero = 0;
unsigned short var_17 = (unsigned short)40139;
int var_18 = -1850651867;
long long int var_19 = -9000053008965871792LL;
unsigned short var_20 = (unsigned short)25326;
long long int arr_2 [10] ;
long long int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4433726708366723956LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -4609916529495962575LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
