#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1593128846;
long long int var_4 = -8389518034822598805LL;
unsigned short var_5 = (unsigned short)5844;
unsigned short var_7 = (unsigned short)43694;
unsigned char var_8 = (unsigned char)20;
unsigned short var_9 = (unsigned short)16289;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-28049;
int zero = 0;
short var_13 = (short)18107;
unsigned int var_14 = 3701103761U;
unsigned long long int var_15 = 3651894279516261510ULL;
signed char var_16 = (signed char)71;
short var_17 = (short)26679;
unsigned short arr_4 [14] [14] [14] ;
unsigned int arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)21975;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 3089125371U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
