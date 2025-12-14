#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14418;
unsigned char var_1 = (unsigned char)141;
long long int var_2 = 9172349058672196453LL;
unsigned short var_4 = (unsigned short)41509;
unsigned char var_5 = (unsigned char)204;
unsigned short var_6 = (unsigned short)59910;
signed char var_9 = (signed char)50;
unsigned short var_10 = (unsigned short)63976;
signed char var_11 = (signed char)47;
unsigned long long int var_12 = 17734585897806060481ULL;
unsigned short var_14 = (unsigned short)46747;
signed char var_15 = (signed char)-10;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)249;
unsigned long long int var_21 = 5316506886245419301ULL;
long long int var_22 = -5422552532942544262LL;
unsigned short var_23 = (unsigned short)32681;
_Bool arr_4 [25] ;
unsigned char arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)112 : (unsigned char)137;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
