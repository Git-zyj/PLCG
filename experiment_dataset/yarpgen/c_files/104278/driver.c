#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)62826;
signed char var_7 = (signed char)82;
short var_8 = (short)29385;
_Bool var_10 = (_Bool)0;
long long int var_12 = 4785460672477243489LL;
unsigned int var_13 = 397632576U;
int zero = 0;
short var_14 = (short)22734;
unsigned int var_15 = 3563085170U;
int var_16 = 1834570641;
signed char var_17 = (signed char)26;
long long int var_18 = 2619718290763487875LL;
int var_19 = 70135088;
signed char arr_2 [22] [22] ;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -8552826259092812461LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
