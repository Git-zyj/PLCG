#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8509124145374659196LL;
short var_8 = (short)-285;
short var_14 = (short)-217;
int zero = 0;
unsigned char var_15 = (unsigned char)16;
unsigned char var_16 = (unsigned char)128;
long long int var_17 = -1288833129116590929LL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)55452;
unsigned long long int var_20 = 17383637000414095540ULL;
long long int arr_2 [12] [12] ;
int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 3501688440808238791LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1528123355 : -1883937264;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
