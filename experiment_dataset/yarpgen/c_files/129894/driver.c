#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)96;
int var_3 = -2089502224;
unsigned char var_4 = (unsigned char)164;
short var_5 = (short)31256;
short var_7 = (short)17938;
unsigned long long int var_8 = 4380557033674272485ULL;
int var_9 = 1257304755;
signed char var_12 = (signed char)119;
int zero = 0;
unsigned long long int var_13 = 17344456667777033576ULL;
unsigned char var_14 = (unsigned char)171;
short var_15 = (short)-18434;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)121;
short var_18 = (short)-18851;
unsigned long long int var_19 = 8811629322693086580ULL;
unsigned char arr_14 [21] ;
short arr_15 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-13457 : (short)30115;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
