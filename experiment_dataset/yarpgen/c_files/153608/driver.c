#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18089;
unsigned short var_3 = (unsigned short)63283;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)16889;
unsigned int var_7 = 1603577196U;
long long int var_8 = 7912899133967720285LL;
long long int var_9 = 2772320487071733460LL;
signed char var_10 = (signed char)-100;
signed char var_11 = (signed char)-125;
short var_12 = (short)29563;
int zero = 0;
unsigned int var_14 = 3416402205U;
unsigned short var_15 = (unsigned short)54643;
long long int var_16 = 1627422502867398036LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)210;
long long int arr_4 [23] ;
unsigned int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 5782176528065856920LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 4090824194U : 648255873U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
