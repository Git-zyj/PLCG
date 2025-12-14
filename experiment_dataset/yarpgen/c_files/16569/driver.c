#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)52;
unsigned char var_4 = (unsigned char)113;
_Bool var_5 = (_Bool)0;
short var_8 = (short)15666;
signed char var_9 = (signed char)101;
int var_10 = 1857919626;
_Bool var_13 = (_Bool)1;
short var_14 = (short)11628;
int var_16 = 1734318015;
int zero = 0;
short var_18 = (short)-18871;
signed char var_19 = (signed char)118;
int var_20 = 885823973;
int var_21 = -379270439;
unsigned char var_22 = (unsigned char)147;
short var_23 = (short)-8776;
signed char var_24 = (signed char)-60;
unsigned char arr_3 [17] [17] ;
int arr_5 [17] ;
signed char arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1775973999;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)118;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
