#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5710739933050408788LL;
int var_2 = 958019506;
int var_3 = -888489894;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)82;
long long int var_6 = 3749946852181507091LL;
unsigned long long int var_7 = 13937350087642151151ULL;
short var_8 = (short)19627;
short var_9 = (short)-21100;
unsigned short var_10 = (unsigned short)21681;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 618741940U;
unsigned long long int var_14 = 8398114761065046920ULL;
_Bool var_15 = (_Bool)0;
long long int arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 360285049108397203LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
