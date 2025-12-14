#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3526023183111801404LL;
long long int var_7 = -6527445588250839404LL;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_18 = -8546605648133773661LL;
long long int var_19 = 7067732187623520922LL;
long long int var_20 = 4069667235834407529LL;
long long int var_21 = 5212819102389821975LL;
_Bool arr_0 [16] ;
_Bool arr_8 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
