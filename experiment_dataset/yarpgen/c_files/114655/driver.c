#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1615887709;
unsigned char var_5 = (unsigned char)192;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-6;
long long int var_12 = -7863733907087064355LL;
unsigned char var_13 = (unsigned char)169;
unsigned short var_14 = (unsigned short)10596;
int zero = 0;
unsigned char var_16 = (unsigned char)226;
int var_17 = -141691313;
unsigned int var_18 = 1296874340U;
unsigned long long int var_19 = 8763770825873398732ULL;
unsigned short var_20 = (unsigned short)23930;
long long int var_21 = 5782020477742360249LL;
unsigned char var_22 = (unsigned char)164;
unsigned short arr_3 [17] ;
unsigned char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2805 : (unsigned short)3323;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)106;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
