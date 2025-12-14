#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6095;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)58;
long long int var_4 = -3117998732178705452LL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)60723;
unsigned char var_7 = (unsigned char)20;
unsigned char var_10 = (unsigned char)131;
int zero = 0;
int var_11 = 474336691;
unsigned short var_12 = (unsigned short)26108;
short var_13 = (short)24959;
unsigned char arr_1 [14] [14] ;
unsigned long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 15020320555516052282ULL : 1369175559088346506ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
