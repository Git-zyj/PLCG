#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)104;
unsigned long long int var_2 = 17969867935641508184ULL;
unsigned long long int var_7 = 13793526524297491748ULL;
unsigned long long int var_12 = 14188999552682597553ULL;
unsigned long long int var_13 = 8438479968276901587ULL;
unsigned long long int var_16 = 12917836913641417298ULL;
unsigned long long int var_19 = 15531131460030687738ULL;
int zero = 0;
unsigned long long int var_20 = 12912557933825273672ULL;
unsigned char var_21 = (unsigned char)198;
unsigned long long int var_22 = 15367978959940111653ULL;
long long int arr_1 [13] ;
unsigned int arr_4 [13] ;
unsigned short arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1293240790966198409LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 449215353U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)33259;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
