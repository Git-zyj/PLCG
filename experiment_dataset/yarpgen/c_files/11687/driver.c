#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-346;
_Bool var_8 = (_Bool)0;
unsigned short var_13 = (unsigned short)24437;
unsigned short var_15 = (unsigned short)63072;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 14690735316170509029ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 9886181426293568221ULL;
_Bool var_21 = (_Bool)0;
signed char arr_0 [24] ;
unsigned short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)26447;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
