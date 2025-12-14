#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
unsigned short var_1 = (unsigned short)24765;
long long int var_2 = 1295386899479546383LL;
unsigned char var_4 = (unsigned char)121;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 18405398445122450419ULL;
long long int var_11 = 5400908649654629177LL;
int var_12 = -950118828;
int var_13 = -609667395;
unsigned short var_16 = (unsigned short)31144;
int zero = 0;
unsigned long long int var_17 = 17992495381823617799ULL;
unsigned char var_18 = (unsigned char)63;
int var_19 = 2127512755;
int var_20 = -1416430769;
unsigned short var_21 = (unsigned short)4739;
unsigned char var_22 = (unsigned char)251;
unsigned long long int var_23 = 10500855287939837704ULL;
unsigned short var_24 = (unsigned short)15913;
unsigned char var_25 = (unsigned char)0;
long long int var_26 = 7351988884825330190LL;
signed char arr_6 [10] ;
short arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (short)-5771;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
