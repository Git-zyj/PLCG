#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17925120067764549375ULL;
signed char var_2 = (signed char)15;
unsigned short var_3 = (unsigned short)26951;
unsigned long long int var_6 = 9151922333808140820ULL;
unsigned short var_8 = (unsigned short)13555;
long long int var_10 = 407042020107614627LL;
signed char var_13 = (signed char)-85;
unsigned short var_16 = (unsigned short)51937;
int zero = 0;
unsigned long long int var_18 = 13750606503993147864ULL;
unsigned short var_19 = (unsigned short)28761;
unsigned char var_20 = (unsigned char)66;
int var_21 = -678447469;
_Bool var_22 = (_Bool)0;
int arr_4 [14] [14] ;
unsigned long long int arr_9 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1038603904 : -2092438824;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 7648818946275816540ULL : 13921031327011559694ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
