#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5957186293696352618LL;
unsigned int var_1 = 3465132595U;
unsigned char var_2 = (unsigned char)253;
signed char var_4 = (signed char)-44;
unsigned short var_8 = (unsigned short)8322;
int var_10 = 868262023;
long long int var_11 = -6821900582854137800LL;
unsigned int var_15 = 3854927373U;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = -3757875893590651632LL;
unsigned short var_19 = (unsigned short)48472;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2170287073078170143ULL;
short arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-17703;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
