#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20340;
long long int var_5 = -2123234577764856322LL;
long long int var_7 = -4402113078681795LL;
signed char var_8 = (signed char)71;
unsigned short var_10 = (unsigned short)34233;
unsigned short var_11 = (unsigned short)53340;
unsigned long long int var_16 = 16990916575061605686ULL;
int zero = 0;
int var_17 = 310032996;
long long int var_18 = -7225116210042966693LL;
unsigned int var_19 = 282937066U;
short var_20 = (short)-23770;
long long int var_21 = -8761018397859213289LL;
unsigned long long int var_22 = 7817248597117708878ULL;
unsigned char var_23 = (unsigned char)180;
unsigned long long int var_24 = 16839960376321689650ULL;
unsigned char var_25 = (unsigned char)118;
unsigned char var_26 = (unsigned char)217;
short arr_5 [16] ;
short arr_8 [16] ;
short arr_12 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-29378 : (short)7845;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)13892 : (short)8103;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (short)-26058;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
