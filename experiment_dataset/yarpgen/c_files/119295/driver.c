#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8556591150418187272LL;
long long int var_12 = -5472647361963047474LL;
short var_14 = (short)18905;
unsigned long long int var_17 = 11714204774229779065ULL;
long long int var_18 = -119108241810644249LL;
int zero = 0;
long long int var_19 = -3179388305748696081LL;
unsigned short var_20 = (unsigned short)31840;
unsigned long long int var_21 = 9151660090206919651ULL;
long long int var_22 = 7757402938384866694LL;
signed char var_23 = (signed char)42;
unsigned long long int var_24 = 13885486817732518240ULL;
long long int arr_0 [19] [19] ;
short arr_2 [19] [19] [19] ;
unsigned char arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -6554186785564653452LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)15532;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)242;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
