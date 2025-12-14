#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)77;
unsigned char var_3 = (unsigned char)140;
unsigned short var_4 = (unsigned short)9546;
unsigned int var_5 = 3925471821U;
unsigned char var_8 = (unsigned char)131;
signed char var_9 = (signed char)60;
signed char var_11 = (signed char)43;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)36972;
unsigned char var_18 = (unsigned char)39;
int zero = 0;
short var_19 = (short)1790;
long long int var_20 = -8186905301028266028LL;
signed char var_21 = (signed char)67;
unsigned char var_22 = (unsigned char)161;
long long int var_23 = 9001585595249930245LL;
int var_24 = -1249504847;
long long int arr_0 [16] ;
long long int arr_1 [16] [16] ;
signed char arr_2 [16] ;
unsigned short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 8606736621690703999LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 5387366814219612086LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)9474;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
