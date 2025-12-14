#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24915;
unsigned short var_2 = (unsigned short)41364;
unsigned int var_5 = 1863563141U;
unsigned char var_6 = (unsigned char)65;
unsigned char var_7 = (unsigned char)50;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 17757439286782834037ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)17;
unsigned int var_14 = 1493746073U;
unsigned short var_16 = (unsigned short)41477;
int zero = 0;
long long int var_17 = -5648708682785305162LL;
unsigned char var_18 = (unsigned char)62;
unsigned char var_19 = (unsigned char)252;
unsigned char var_20 = (unsigned char)180;
unsigned short var_21 = (unsigned short)51836;
unsigned int var_22 = 1587640329U;
unsigned char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)182 : (unsigned char)148;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
