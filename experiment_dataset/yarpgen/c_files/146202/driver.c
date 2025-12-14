#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_9 = 6300125021304829555ULL;
int zero = 0;
int var_11 = 988123577;
unsigned int var_12 = 2859483197U;
short var_13 = (short)-17722;
int var_14 = 1589675344;
long long int arr_1 [14] ;
short arr_3 [22] ;
long long int arr_4 [22] ;
_Bool arr_9 [22] ;
int arr_11 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -8614123995052172856LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)16838 : (short)18042;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3312353990125792468LL : -8516841521890640768LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2129310071;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
