#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -78498192;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 6513613U;
unsigned short var_11 = (unsigned short)52339;
short var_14 = (short)13421;
unsigned short var_15 = (unsigned short)34357;
int var_16 = 55669647;
short var_18 = (short)-9069;
int zero = 0;
int var_20 = 1335522804;
signed char var_21 = (signed char)-39;
unsigned short var_22 = (unsigned short)49710;
int var_23 = 729030748;
_Bool var_24 = (_Bool)1;
short arr_0 [21] ;
int arr_6 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)27577;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1181924973 : -496945813;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
