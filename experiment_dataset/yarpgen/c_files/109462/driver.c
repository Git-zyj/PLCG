#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3992984199U;
unsigned long long int var_6 = 5850558787303629374ULL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)197;
unsigned long long int var_12 = 12066158843934888875ULL;
signed char var_14 = (signed char)35;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 4979489764787553033ULL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)208;
long long int var_21 = 2192180975731981760LL;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1713180427U;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 13972561329206484375ULL;
short arr_0 [14] [14] ;
signed char arr_12 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-17218;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)-22;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
