#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2038049000;
int var_1 = 1187433529;
unsigned short var_2 = (unsigned short)30906;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)-78;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)-52;
long long int var_11 = -8999621454670882542LL;
unsigned long long int var_12 = 1519641036609168946ULL;
long long int var_13 = -9200353660133348436LL;
int zero = 0;
unsigned long long int var_14 = 1601226599519427307ULL;
long long int var_15 = -8791496140449257985LL;
unsigned int var_16 = 3616780450U;
long long int var_17 = -4950176530533268677LL;
unsigned char var_18 = (unsigned char)136;
unsigned short arr_10 [25] ;
unsigned int arr_11 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20985 : (unsigned short)15257;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 910400837U : 366072118U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
