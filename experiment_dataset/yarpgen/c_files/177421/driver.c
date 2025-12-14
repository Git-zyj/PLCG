#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40403;
unsigned short var_3 = (unsigned short)40879;
int var_4 = 600894364;
unsigned long long int var_8 = 13668061211951993567ULL;
short var_9 = (short)-25501;
unsigned int var_10 = 3289548920U;
_Bool var_11 = (_Bool)1;
long long int var_12 = 7784447261933057154LL;
short var_13 = (short)-27815;
unsigned int var_14 = 225206562U;
int zero = 0;
short var_15 = (short)17131;
long long int var_16 = -83075884797717449LL;
unsigned char var_17 = (unsigned char)187;
short var_18 = (short)-2847;
long long int var_19 = 3841421994310016994LL;
unsigned short var_20 = (unsigned short)60662;
_Bool var_21 = (_Bool)1;
long long int arr_7 [25] [25] ;
unsigned long long int arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = -5810956701099877694LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 7252829553241889386ULL : 5383039193606569927ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
