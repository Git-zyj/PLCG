#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11008747905739019081ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 16161123924642106198ULL;
signed char var_4 = (signed char)-5;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-3726;
int var_9 = -947050648;
int zero = 0;
unsigned int var_10 = 2652379299U;
_Bool var_11 = (_Bool)0;
long long int var_12 = 2013103614992441624LL;
unsigned long long int var_13 = 12605297386172710046ULL;
unsigned int var_14 = 3507893879U;
unsigned short var_15 = (unsigned short)61573;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2916542530U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
