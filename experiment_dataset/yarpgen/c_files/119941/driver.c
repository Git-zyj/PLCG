#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63295;
unsigned char var_4 = (unsigned char)81;
long long int var_5 = -1818119568907816819LL;
unsigned int var_6 = 218316663U;
unsigned short var_7 = (unsigned short)47512;
int var_8 = 1395847850;
unsigned char var_9 = (unsigned char)248;
unsigned char var_10 = (unsigned char)17;
signed char var_11 = (signed char)123;
short var_12 = (short)11240;
unsigned long long int var_13 = 17961772692044741847ULL;
int zero = 0;
long long int var_14 = 917486042192997482LL;
short var_15 = (short)27152;
short var_16 = (short)21515;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1970124941U;
long long int arr_0 [12] ;
unsigned short arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 112621680561583879LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)25831 : (unsigned short)10711;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
