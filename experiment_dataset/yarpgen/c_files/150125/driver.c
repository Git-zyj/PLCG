#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)3542;
unsigned char var_4 = (unsigned char)18;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 17395904006297799939ULL;
long long int var_8 = -1961196837657865576LL;
unsigned int var_9 = 2695499903U;
unsigned char var_14 = (unsigned char)109;
int zero = 0;
long long int var_15 = -5817194922237119193LL;
unsigned long long int var_16 = 14649743677537579303ULL;
unsigned long long int var_17 = 7503199006271984304ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3607576148U;
short arr_0 [16] ;
unsigned long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-12004;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 9484014854731081059ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
