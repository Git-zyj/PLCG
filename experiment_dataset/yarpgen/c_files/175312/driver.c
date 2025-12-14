#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5620;
int var_4 = 1607183696;
unsigned long long int var_7 = 8933307035905443671ULL;
signed char var_10 = (signed char)17;
signed char var_12 = (signed char)68;
signed char var_14 = (signed char)-56;
unsigned char var_16 = (unsigned char)184;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)13335;
signed char var_20 = (signed char)83;
unsigned short var_21 = (unsigned short)341;
unsigned short var_22 = (unsigned short)590;
int var_23 = -1249557578;
unsigned long long int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 2785069982213041108ULL : 14004778010258566781ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
