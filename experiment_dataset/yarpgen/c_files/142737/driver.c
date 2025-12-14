#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7823297246679173286LL;
unsigned short var_4 = (unsigned short)5571;
int var_12 = 1261844308;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 10498623372353199762ULL;
signed char var_17 = (signed char)-95;
unsigned char var_18 = (unsigned char)109;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)61234;
unsigned short arr_0 [25] ;
short arr_1 [25] ;
signed char arr_2 [25] ;
short arr_4 [24] ;
_Bool arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)20492;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)25998;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)27611;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
