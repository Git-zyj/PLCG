#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7526812540006142802ULL;
short var_3 = (short)30119;
unsigned char var_5 = (unsigned char)215;
short var_8 = (short)-17805;
short var_9 = (short)-9012;
long long int var_10 = -5945508281415667160LL;
short var_12 = (short)16171;
short var_13 = (short)7932;
short var_18 = (short)-20169;
unsigned long long int var_19 = 14849222703820662477ULL;
int zero = 0;
short var_20 = (short)28482;
short var_21 = (short)13842;
short var_22 = (short)16946;
short var_23 = (short)6286;
short arr_2 [22] ;
unsigned char arr_3 [22] ;
unsigned long long int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-28606;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 9049664228529327242ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
