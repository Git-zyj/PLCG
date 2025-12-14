#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 416133300;
short var_3 = (short)-1220;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-4668;
int var_10 = 1302918539;
long long int var_11 = -298185125281902297LL;
int zero = 0;
unsigned int var_12 = 3871747309U;
unsigned short var_13 = (unsigned short)50679;
long long int var_14 = 2944834870358408024LL;
unsigned long long int var_15 = 13216853837852005241ULL;
unsigned short arr_5 [25] [25] [25] ;
long long int arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)23693;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 1410855004094225435LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
