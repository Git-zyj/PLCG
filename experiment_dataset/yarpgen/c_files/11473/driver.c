#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8158;
unsigned long long int var_2 = 17793913017932693389ULL;
long long int var_3 = -4686640366160330604LL;
_Bool var_4 = (_Bool)1;
short var_7 = (short)15510;
_Bool var_10 = (_Bool)0;
signed char var_14 = (signed char)30;
unsigned char var_15 = (unsigned char)98;
int zero = 0;
signed char var_16 = (signed char)0;
signed char var_17 = (signed char)44;
signed char var_18 = (signed char)17;
long long int var_19 = -5049866040281668528LL;
long long int var_20 = -7101755257872160198LL;
unsigned long long int arr_0 [25] ;
_Bool arr_1 [25] ;
_Bool arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8902165364532229834ULL : 14510631327160874886ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
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
