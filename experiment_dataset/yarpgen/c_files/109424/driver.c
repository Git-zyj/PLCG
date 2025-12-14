#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9560223284333267764ULL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
long long int var_5 = 1128321781760771097LL;
unsigned long long int var_6 = 6079922498978727696ULL;
_Bool var_7 = (_Bool)1;
signed char var_11 = (signed char)-118;
signed char var_12 = (signed char)-44;
int var_13 = 415080242;
_Bool var_14 = (_Bool)1;
unsigned int var_17 = 1030212736U;
int zero = 0;
long long int var_19 = 4560713959472596610LL;
short var_20 = (short)-15512;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-19119;
unsigned char var_24 = (unsigned char)172;
int var_25 = 893639848;
unsigned int arr_1 [18] ;
signed char arr_4 [18] [18] [18] ;
unsigned int arr_8 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 858954347U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 335619103U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
