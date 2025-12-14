#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24117;
int var_2 = -1915751110;
long long int var_3 = 5376655963465558365LL;
int var_4 = -978401791;
int var_5 = 1870312359;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)60877;
long long int var_9 = 7775171588509906576LL;
signed char var_12 = (signed char)-10;
short var_13 = (short)5386;
int zero = 0;
unsigned long long int var_14 = 8540745978707873433ULL;
unsigned int var_15 = 1147477854U;
long long int var_16 = -7053243988666988818LL;
int var_17 = -1654774182;
int var_18 = -482941219;
int var_19 = 1978134220;
unsigned short var_20 = (unsigned short)50412;
_Bool var_21 = (_Bool)1;
unsigned int arr_5 [19] [19] ;
int arr_6 [19] [19] ;
int arr_8 [19] [19] [19] [19] [19] [19] ;
long long int arr_10 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 2407443455U : 592571522U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -697417713 : 454826751;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 784133493 : -872852154;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1723220776953530507LL : -2361075231288710404LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
