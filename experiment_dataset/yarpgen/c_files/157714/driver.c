#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44465;
unsigned short var_5 = (unsigned short)20981;
unsigned long long int var_6 = 13564528641837490923ULL;
unsigned char var_7 = (unsigned char)196;
unsigned short var_12 = (unsigned short)64373;
signed char var_15 = (signed char)90;
int zero = 0;
unsigned short var_20 = (unsigned short)16563;
unsigned int var_21 = 2532662421U;
unsigned int var_22 = 1295105526U;
unsigned long long int var_23 = 18055084104072355961ULL;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_7 [12] [12] ;
signed char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 4563570167475662258ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-73 : (signed char)-96;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
