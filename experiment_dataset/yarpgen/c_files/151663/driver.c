#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned int var_1 = 881451510U;
long long int var_3 = 8413122545138076665LL;
unsigned long long int var_4 = 16684550326354127286ULL;
unsigned char var_5 = (unsigned char)30;
short var_6 = (short)-14493;
long long int var_7 = 4142030687530586140LL;
unsigned long long int var_8 = 2628030329581491428ULL;
short var_9 = (short)18714;
_Bool var_10 = (_Bool)0;
long long int var_11 = 2772880134803489825LL;
unsigned char var_12 = (unsigned char)48;
int zero = 0;
short var_13 = (short)-26561;
unsigned short var_14 = (unsigned short)365;
unsigned short var_15 = (unsigned short)5056;
unsigned int var_16 = 1206381695U;
long long int var_17 = -2109371875904882056LL;
long long int var_18 = 2808659518486296317LL;
unsigned short arr_0 [16] ;
short arr_1 [16] ;
unsigned char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)50859;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-15107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)8;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
