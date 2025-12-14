#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
signed char var_2 = (signed char)6;
long long int var_3 = -5179955633070332628LL;
_Bool var_6 = (_Bool)0;
int var_8 = -108249874;
int var_14 = 836656496;
int zero = 0;
int var_18 = -1705751798;
short var_19 = (short)11803;
unsigned short var_20 = (unsigned short)50289;
signed char var_21 = (signed char)22;
unsigned long long int var_22 = 2996538053121463254ULL;
long long int var_23 = -4571192681754897142LL;
unsigned short arr_1 [17] ;
long long int arr_2 [17] [17] ;
int arr_3 [17] [17] [17] ;
_Bool arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)52730;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 6247788012474271979LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -918679098;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
