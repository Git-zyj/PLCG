#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10269;
unsigned int var_8 = 2361826145U;
long long int var_12 = -4064535277388879595LL;
signed char var_14 = (signed char)-17;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)218;
int zero = 0;
short var_19 = (short)20192;
unsigned long long int var_20 = 16810062447730753747ULL;
long long int var_21 = -1715168467681557558LL;
long long int arr_2 [15] ;
signed char arr_5 [15] ;
unsigned long long int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4519981824717562594LL : -1438781538932705489LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7779687961879177560ULL : 7239879730079604096ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
