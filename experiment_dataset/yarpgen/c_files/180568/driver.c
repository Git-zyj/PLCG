#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13625;
long long int var_8 = -7258984175909236385LL;
signed char var_18 = (signed char)-112;
int zero = 0;
unsigned short var_20 = (unsigned short)36852;
unsigned int var_21 = 2082166352U;
short var_22 = (short)4560;
unsigned short var_23 = (unsigned short)20575;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-113;
unsigned long long int arr_1 [16] ;
unsigned short arr_2 [16] ;
unsigned long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 16901010630281279631ULL : 2577370342515942824ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56427 : (unsigned short)62554;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 5111063783307691834ULL : 17677660213335932309ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
