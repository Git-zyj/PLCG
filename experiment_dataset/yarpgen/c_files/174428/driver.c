#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9117915437972242945LL;
int var_2 = 75692432;
unsigned int var_5 = 2555966999U;
int var_6 = -1128329192;
unsigned short var_7 = (unsigned short)28003;
unsigned long long int var_11 = 9154156068999825991ULL;
unsigned int var_14 = 3303967912U;
int zero = 0;
long long int var_16 = 728445245607636344LL;
long long int var_17 = -8792593326136272057LL;
unsigned long long int var_18 = 3973074463448221780ULL;
int var_19 = 871899284;
unsigned char var_20 = (unsigned char)99;
int var_21 = 1626032909;
signed char var_22 = (signed char)-19;
long long int arr_2 [10] ;
int arr_4 [10] [10] [10] ;
int arr_13 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -4861156092250876587LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 110584280;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -2105206999;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
