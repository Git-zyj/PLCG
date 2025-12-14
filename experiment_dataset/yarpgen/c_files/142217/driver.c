#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
unsigned long long int var_1 = 9551888121615838509ULL;
int var_3 = 1140952404;
signed char var_4 = (signed char)118;
unsigned long long int var_5 = 11657726903765816566ULL;
int var_6 = 646216561;
unsigned long long int var_7 = 13654453748937386039ULL;
signed char var_9 = (signed char)54;
unsigned char var_10 = (unsigned char)62;
signed char var_13 = (signed char)69;
signed char var_14 = (signed char)-56;
long long int var_15 = -7840724823738813856LL;
short var_16 = (short)14428;
signed char var_17 = (signed char)66;
int var_18 = 1871672840;
int zero = 0;
unsigned long long int var_19 = 16024659322789600097ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 12880423082102624654ULL;
long long int var_22 = 1723839125232230920LL;
short var_23 = (short)26769;
unsigned long long int var_24 = 12766012615957352051ULL;
int arr_1 [17] ;
unsigned long long int arr_2 [17] ;
_Bool arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1880018524;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 15281578074023514352ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
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
