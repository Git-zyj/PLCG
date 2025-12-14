#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)144;
signed char var_3 = (signed char)-72;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 539941779U;
unsigned char var_6 = (unsigned char)153;
unsigned char var_8 = (unsigned char)167;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)31582;
int zero = 0;
short var_15 = (short)-29803;
unsigned short var_16 = (unsigned short)48045;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-20990;
long long int var_19 = 7600463203936210334LL;
unsigned int var_20 = 2987329909U;
unsigned char arr_2 [13] [13] ;
_Bool arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
