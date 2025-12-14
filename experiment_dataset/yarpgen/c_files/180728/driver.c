#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11929689354027061470ULL;
signed char var_2 = (signed char)-27;
long long int var_8 = -7229169645943502285LL;
unsigned short var_9 = (unsigned short)8198;
unsigned long long int var_10 = 8560166502840302881ULL;
signed char var_11 = (signed char)41;
unsigned char var_12 = (unsigned char)208;
long long int var_14 = 468316282245707121LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 16802925243791867474ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-2816;
unsigned short var_22 = (unsigned short)35203;
unsigned long long int var_23 = 16584374685569341486ULL;
signed char var_24 = (signed char)-9;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)26;
signed char arr_0 [22] ;
_Bool arr_1 [22] ;
unsigned char arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)210 : (unsigned char)129;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
