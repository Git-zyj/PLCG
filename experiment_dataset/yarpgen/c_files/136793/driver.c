#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
long long int var_1 = 5732261791125555198LL;
short var_7 = (short)69;
long long int var_13 = -3478714354841082691LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_19 = 7827319640634053487LL;
unsigned char var_20 = (unsigned char)218;
short var_21 = (short)-28016;
unsigned long long int var_22 = 3447281502737246409ULL;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-32118;
short arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-2482;
}

void checksum() {
    hash(&seed, var_19);
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
