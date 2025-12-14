#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)59;
signed char var_8 = (signed char)-23;
int var_14 = -475412604;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned char var_19 = (unsigned char)55;
int zero = 0;
short var_20 = (short)-29988;
long long int var_21 = 7061210988924514208LL;
unsigned char var_22 = (unsigned char)126;
unsigned short var_23 = (unsigned short)25940;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 5124103403036555959ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
