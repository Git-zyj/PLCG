#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15391551103455797639ULL;
long long int var_1 = 1611302347741890670LL;
unsigned int var_3 = 2390423930U;
unsigned int var_5 = 1265383196U;
unsigned long long int var_6 = 12086232684905022209ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2285122440U;
unsigned long long int var_9 = 406931973036602908ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)5;
signed char var_11 = (signed char)-116;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int var_14 = 178799297;
unsigned int var_15 = 365908977U;
unsigned char var_16 = (unsigned char)6;
_Bool var_17 = (_Bool)0;
int arr_4 [23] ;
long long int arr_5 [23] [23] [23] ;
long long int arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 991190575;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -8913117162401545857LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 4039223769391988268LL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
