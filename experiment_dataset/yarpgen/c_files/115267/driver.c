#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-95;
unsigned short var_19 = (unsigned short)8055;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11387446988708918528ULL;
unsigned int var_22 = 3303863518U;
unsigned short var_23 = (unsigned short)54116;
unsigned long long int arr_0 [18] ;
unsigned char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 15875157032429748201ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)120;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
