#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2529525998713740839LL;
long long int var_3 = 8148825051236906598LL;
signed char var_8 = (signed char)14;
unsigned long long int var_10 = 8239473780177538460ULL;
long long int var_11 = -4088043788038445576LL;
unsigned int var_13 = 2457579399U;
int zero = 0;
unsigned char var_20 = (unsigned char)36;
unsigned char var_21 = (unsigned char)38;
long long int var_22 = 563657393978276597LL;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 2446063033U;
long long int var_25 = 1835402947421580398LL;
long long int var_26 = -8703848731426842847LL;
unsigned char var_27 = (unsigned char)39;
unsigned int var_28 = 930173037U;
_Bool var_29 = (_Bool)1;
unsigned char arr_0 [15] ;
unsigned char arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)202;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
