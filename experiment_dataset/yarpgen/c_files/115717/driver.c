#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8188824762224420712LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 3837138773499064557ULL;
short var_5 = (short)2580;
unsigned long long int var_6 = 16561148239168270583ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)30905;
int zero = 0;
long long int var_10 = -6410709412121677834LL;
short var_11 = (short)29904;
unsigned long long int var_12 = 11839417537979568810ULL;
unsigned int var_13 = 192768090U;
unsigned int var_14 = 2213588630U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)1458;
unsigned short arr_1 [15] ;
unsigned long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)57735;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 291304152047545104ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
