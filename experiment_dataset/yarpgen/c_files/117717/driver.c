#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned short var_1 = (unsigned short)40848;
int var_2 = -108197220;
unsigned char var_3 = (unsigned char)150;
signed char var_4 = (signed char)9;
signed char var_5 = (signed char)-70;
unsigned long long int var_8 = 3600987174414344868ULL;
short var_9 = (short)12758;
int var_10 = -328220385;
signed char var_12 = (signed char)-84;
unsigned int var_13 = 1717922878U;
short var_14 = (short)-1132;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-17848;
unsigned short var_18 = (unsigned short)36675;
int zero = 0;
long long int var_19 = -8100810905210962167LL;
short var_20 = (short)32265;
signed char var_21 = (signed char)-24;
unsigned short var_22 = (unsigned short)53325;
short var_23 = (short)-30446;
unsigned short var_24 = (unsigned short)26631;
unsigned long long int var_25 = 1762139373664025145ULL;
signed char arr_0 [14] ;
unsigned char arr_2 [14] [14] ;
long long int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 7435931165491354864LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
