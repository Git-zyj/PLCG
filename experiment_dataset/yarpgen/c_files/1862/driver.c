#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10036;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1508736119;
unsigned short var_22 = (unsigned short)6863;
long long int var_23 = -7230962406833176609LL;
unsigned long long int var_24 = 689089654615582577ULL;
unsigned int var_25 = 4261324656U;
_Bool arr_0 [13] ;
signed char arr_1 [13] ;
unsigned int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)127 : (signed char)64;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 44451682U;
}

void checksum() {
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
