#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6089504397976948031LL;
signed char var_7 = (signed char)-112;
unsigned int var_11 = 2151136789U;
long long int var_12 = -3011609120554819449LL;
signed char var_13 = (signed char)-82;
unsigned char var_16 = (unsigned char)171;
int zero = 0;
int var_17 = 936149100;
unsigned short var_18 = (unsigned short)15771;
_Bool var_19 = (_Bool)0;
short var_20 = (short)16105;
long long int var_21 = -160626549740159233LL;
signed char arr_0 [18] ;
unsigned char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)109 : (unsigned char)208;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
