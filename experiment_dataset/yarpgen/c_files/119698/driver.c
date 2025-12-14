#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)239;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 6838116907095962707ULL;
long long int var_8 = 6593352898477789899LL;
int var_9 = 651035366;
unsigned int var_13 = 88544706U;
int zero = 0;
unsigned long long int var_16 = 11225949920637436651ULL;
short var_17 = (short)-18318;
long long int var_18 = -8357267859559252263LL;
signed char var_19 = (signed char)-8;
signed char var_20 = (signed char)-52;
_Bool var_21 = (_Bool)0;
short var_22 = (short)1120;
long long int arr_3 [11] [11] ;
long long int arr_6 [19] ;
unsigned short arr_8 [19] [19] ;
unsigned char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 8539699442437726760LL : -1360313814390109685LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 6990897155501332272LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)9627;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)245 : (unsigned char)90;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
