#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 841614928;
unsigned long long int var_2 = 15972296521721165784ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 6941878618585974595ULL;
long long int var_10 = -5695772661218770482LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 11855546817332240509ULL;
int var_14 = -1370897781;
int var_15 = 119548837;
int zero = 0;
unsigned long long int var_18 = 8873775789267526642ULL;
unsigned short var_19 = (unsigned short)65278;
int var_20 = -1857329369;
unsigned char var_21 = (unsigned char)9;
signed char var_22 = (signed char)23;
_Bool arr_0 [16] [16] ;
unsigned char arr_3 [16] ;
short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)30009;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
