#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)180;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-94;
unsigned char var_13 = (unsigned char)38;
unsigned int var_16 = 4260985589U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)30738;
unsigned int var_19 = 713610919U;
int zero = 0;
int var_20 = -913391818;
long long int var_21 = 8275884854731321400LL;
unsigned short var_22 = (unsigned short)24468;
_Bool var_23 = (_Bool)0;
unsigned long long int arr_1 [25] ;
unsigned char arr_3 [25] [25] ;
unsigned char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 18270394837944914696ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)98 : (unsigned char)153;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
