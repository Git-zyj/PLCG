#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
long long int var_3 = 2302594929719358030LL;
short var_4 = (short)11001;
unsigned long long int var_7 = 26883339296762989ULL;
unsigned short var_9 = (unsigned short)21840;
short var_11 = (short)-21266;
unsigned long long int var_12 = 11371684941082834534ULL;
int var_13 = 1602401531;
long long int var_14 = 5764996453744488627LL;
unsigned int var_15 = 4290988807U;
int zero = 0;
unsigned short var_17 = (unsigned short)53537;
unsigned short var_18 = (unsigned short)59047;
unsigned short var_19 = (unsigned short)1271;
unsigned int var_20 = 3304283491U;
unsigned int arr_0 [15] [15] ;
signed char arr_1 [15] ;
unsigned short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 3044582574U : 2843575080U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3387 : (unsigned short)39292;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
