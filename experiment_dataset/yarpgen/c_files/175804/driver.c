#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26181;
long long int var_4 = -7290901228249472315LL;
long long int var_5 = -8481747880961216740LL;
long long int var_6 = 430361131170856487LL;
long long int var_8 = -4643279986307875116LL;
unsigned long long int var_9 = 10686467417416475088ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 3136594608556728335LL;
unsigned short var_13 = (unsigned short)20386;
short var_14 = (short)2391;
long long int var_15 = 3880140234362522529LL;
unsigned short var_16 = (unsigned short)47918;
unsigned int var_17 = 2585729248U;
signed char arr_1 [21] ;
unsigned char arr_2 [21] ;
_Bool arr_3 [21] ;
short arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-32151;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
