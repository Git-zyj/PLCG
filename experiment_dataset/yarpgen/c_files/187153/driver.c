#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 5307608487562552042LL;
signed char var_4 = (signed char)-30;
_Bool var_5 = (_Bool)1;
short var_6 = (short)13540;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3173497830U;
unsigned int var_11 = 1465620038U;
unsigned long long int var_12 = 1483859323059470090ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)151;
unsigned int var_14 = 2510683994U;
signed char var_15 = (signed char)-63;
short var_16 = (short)-3209;
unsigned long long int var_17 = 1822130620871011930ULL;
unsigned short var_18 = (unsigned short)63230;
int var_19 = -1632370076;
signed char var_20 = (signed char)120;
unsigned char arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)32;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
