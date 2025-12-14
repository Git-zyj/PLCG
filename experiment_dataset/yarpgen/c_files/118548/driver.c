#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -157826240;
int var_4 = -1378782220;
short var_6 = (short)-18916;
long long int var_7 = -8159843458604250258LL;
signed char var_8 = (signed char)-50;
_Bool var_10 = (_Bool)1;
long long int var_11 = -8593590308408488075LL;
unsigned long long int var_12 = 8534246341854108605ULL;
unsigned int var_15 = 3327786277U;
unsigned int var_16 = 3367267424U;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = -1445195920853983817LL;
unsigned int var_20 = 518270187U;
unsigned int var_21 = 5911111U;
long long int var_22 = 9012024499851721800LL;
unsigned char var_23 = (unsigned char)208;
unsigned short arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)45976;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
