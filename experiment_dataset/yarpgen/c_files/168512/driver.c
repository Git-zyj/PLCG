#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
signed char var_2 = (signed char)39;
short var_3 = (short)29396;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)239;
unsigned int var_8 = 1181800709U;
unsigned short var_10 = (unsigned short)27722;
int zero = 0;
short var_15 = (short)753;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)107;
short var_18 = (short)-25051;
unsigned short var_19 = (unsigned short)50512;
unsigned short var_20 = (unsigned short)16472;
signed char var_21 = (signed char)121;
short var_22 = (short)-23914;
unsigned char var_23 = (unsigned char)223;
long long int arr_11 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -4615553320670406590LL : -5596496879215919997LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
