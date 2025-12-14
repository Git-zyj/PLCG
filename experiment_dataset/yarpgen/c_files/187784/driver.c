#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1367852887;
unsigned long long int var_1 = 14303978031862124291ULL;
unsigned long long int var_2 = 1181338462126568004ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -5894832439415572055LL;
_Bool var_6 = (_Bool)0;
int zero = 0;
int var_10 = -91307983;
int var_11 = 1401016362;
unsigned char var_12 = (unsigned char)22;
short var_13 = (short)4319;
unsigned char arr_2 [11] ;
unsigned short arr_4 [11] ;
int arr_5 [11] ;
long long int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)4348;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -1213745676;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = -7845376286688338078LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
