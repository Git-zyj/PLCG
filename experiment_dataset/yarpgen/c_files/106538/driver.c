#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11361886478673421505ULL;
short var_3 = (short)24251;
long long int var_4 = -5850515813448791797LL;
long long int var_5 = -3892584007680170498LL;
long long int var_7 = 1417715833325635161LL;
unsigned long long int var_8 = 17072640552303210677ULL;
long long int var_9 = 3136186851084209121LL;
short var_12 = (short)4410;
short var_13 = (short)10309;
int zero = 0;
short var_14 = (short)26322;
short var_15 = (short)-20263;
short var_16 = (short)17475;
long long int var_17 = 141173551291231243LL;
short var_18 = (short)15709;
short var_19 = (short)-20962;
unsigned short var_20 = (unsigned short)53813;
long long int arr_1 [23] ;
short arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 4870864433936793353LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)17530;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
