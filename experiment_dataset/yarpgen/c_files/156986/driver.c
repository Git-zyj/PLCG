#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 967416921;
unsigned short var_3 = (unsigned short)51060;
unsigned int var_5 = 3803270847U;
unsigned long long int var_6 = 2730177407048028061ULL;
long long int var_7 = -2491759022315481005LL;
int var_8 = -918946485;
unsigned int var_9 = 561030009U;
int zero = 0;
unsigned int var_10 = 4123351847U;
short var_11 = (short)18122;
long long int var_12 = -7970370201958828719LL;
unsigned short var_13 = (unsigned short)1135;
unsigned int var_14 = 3843180411U;
_Bool arr_0 [23] ;
signed char arr_2 [23] ;
int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)123 : (signed char)-127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 802109939 : 1823478471;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
