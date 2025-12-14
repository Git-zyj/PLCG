#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 5369959986227958910ULL;
short var_6 = (short)25812;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)126;
signed char var_13 = (signed char)60;
unsigned long long int var_14 = 12608256497687827388ULL;
short var_15 = (short)-18168;
int zero = 0;
unsigned char var_16 = (unsigned char)250;
unsigned long long int var_17 = 11566931406052707343ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 794791706U;
int var_20 = -1166661906;
int arr_0 [21] [21] ;
int arr_1 [21] ;
short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 1579497004;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1064893816;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-27684;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
