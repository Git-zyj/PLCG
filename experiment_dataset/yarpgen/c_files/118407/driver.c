#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1125261171;
short var_1 = (short)-8704;
unsigned short var_2 = (unsigned short)61521;
long long int var_4 = -5022903902683483720LL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-6373;
unsigned short var_9 = (unsigned short)61165;
signed char var_10 = (signed char)-102;
int var_12 = 2024171638;
int zero = 0;
unsigned int var_14 = 728815229U;
long long int var_15 = 2444181858531498882LL;
unsigned int var_16 = 2703192435U;
long long int var_17 = -4144876173735892487LL;
int var_18 = -1070722950;
unsigned int arr_0 [11] ;
short arr_1 [11] ;
long long int arr_2 [11] [11] ;
int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 924627243U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)10832;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 9018156209608324009LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = -1264100396;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
