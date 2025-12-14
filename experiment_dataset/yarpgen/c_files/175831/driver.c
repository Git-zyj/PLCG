#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26595;
unsigned int var_5 = 3787657232U;
unsigned int var_7 = 1619327496U;
unsigned int var_8 = 222587571U;
signed char var_9 = (signed char)-125;
long long int var_10 = 9043490090017728935LL;
unsigned int var_11 = 2391765949U;
int var_12 = 387908061;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-39;
int zero = 0;
unsigned int var_15 = 2548323763U;
unsigned int var_16 = 2843864388U;
unsigned int var_17 = 483764252U;
unsigned long long int var_18 = 15073320273247522063ULL;
unsigned long long int var_19 = 8185628355954102183ULL;
long long int arr_0 [16] [16] ;
signed char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 7629817739815747274LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-108;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
