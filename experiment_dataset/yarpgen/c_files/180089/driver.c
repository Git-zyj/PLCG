#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1649193111333546575LL;
long long int var_3 = -888671216032094831LL;
long long int var_4 = 4362978697792849426LL;
short var_5 = (short)-19062;
unsigned short var_6 = (unsigned short)28855;
unsigned short var_9 = (unsigned short)12614;
int var_10 = -522791886;
int zero = 0;
int var_12 = -1576861505;
int var_13 = 1191035275;
int var_14 = 869647380;
unsigned short var_15 = (unsigned short)10156;
long long int var_16 = -1658871465106625752LL;
unsigned char arr_0 [18] ;
unsigned short arr_1 [18] ;
unsigned short arr_2 [18] [18] ;
signed char arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)33472;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)22441;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)-47;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
