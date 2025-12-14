#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
unsigned short var_1 = (unsigned short)36827;
signed char var_2 = (signed char)92;
long long int var_3 = 4504335308782699846LL;
int var_4 = -753612315;
signed char var_5 = (signed char)64;
signed char var_6 = (signed char)-60;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
short var_10 = (short)27764;
int zero = 0;
signed char var_14 = (signed char)4;
short var_15 = (short)10887;
int var_16 = -2002800523;
unsigned short var_17 = (unsigned short)42386;
unsigned int var_18 = 3691047452U;
unsigned long long int var_19 = 5053415556978587215ULL;
short var_20 = (short)12484;
unsigned int var_21 = 1767528336U;
short arr_0 [18] ;
unsigned long long int arr_1 [18] ;
unsigned short arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)8916;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 17147626251331699417ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)50918;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
