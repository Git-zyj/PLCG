#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13768828025793076296ULL;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)24766;
short var_3 = (short)-7614;
unsigned short var_4 = (unsigned short)14012;
unsigned char var_5 = (unsigned char)180;
long long int var_8 = -3159162344650495346LL;
unsigned short var_9 = (unsigned short)62037;
unsigned short var_11 = (unsigned short)54161;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)41798;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)95;
int var_17 = 169902666;
int var_18 = 1578417862;
_Bool var_19 = (_Bool)1;
unsigned char arr_1 [12] [12] ;
_Bool arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
