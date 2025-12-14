#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2656;
unsigned short var_2 = (unsigned short)9802;
short var_8 = (short)5531;
unsigned long long int var_11 = 16777026713395202101ULL;
signed char var_12 = (signed char)-89;
unsigned int var_13 = 3717076040U;
int zero = 0;
unsigned char var_15 = (unsigned char)202;
unsigned long long int var_16 = 13868408062631076768ULL;
signed char var_17 = (signed char)21;
short var_18 = (short)8871;
unsigned long long int var_19 = 15998907931785402993ULL;
int var_20 = -152719761;
_Bool arr_0 [13] ;
_Bool arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
