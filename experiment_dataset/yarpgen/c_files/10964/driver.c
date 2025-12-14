#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6502393872198277700LL;
signed char var_2 = (signed char)-79;
short var_4 = (short)15109;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)37444;
unsigned short var_9 = (unsigned short)9872;
long long int var_10 = -3450788060085539447LL;
int var_12 = 1298180079;
long long int var_14 = -4757339492847876998LL;
unsigned char var_15 = (unsigned char)155;
int zero = 0;
unsigned char var_16 = (unsigned char)30;
signed char var_17 = (signed char)-123;
long long int var_18 = 602509842873317971LL;
int var_19 = -50469568;
signed char var_20 = (signed char)-94;
_Bool var_21 = (_Bool)0;
short arr_1 [20] ;
short arr_2 [20] [20] ;
int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-4319 : (short)-14740;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -274074111 : 244604913;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
