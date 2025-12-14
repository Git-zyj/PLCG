#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5307218613524969307LL;
short var_1 = (short)-17042;
unsigned int var_2 = 608896408U;
unsigned short var_3 = (unsigned short)25061;
unsigned short var_4 = (unsigned short)18483;
unsigned int var_5 = 2915078419U;
unsigned short var_6 = (unsigned short)57936;
unsigned char var_7 = (unsigned char)122;
unsigned long long int var_8 = 11181606180634682321ULL;
long long int var_10 = -6890367124144255186LL;
int zero = 0;
short var_11 = (short)-10323;
signed char var_12 = (signed char)48;
_Bool var_13 = (_Bool)1;
unsigned int arr_7 [14] [14] ;
unsigned int arr_8 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 3885762106U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 2968044660U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
