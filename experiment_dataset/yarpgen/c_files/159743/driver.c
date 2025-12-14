#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4046019712U;
int var_4 = 549482196;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 6455526283935320220ULL;
unsigned long long int var_9 = 2387440040946011236ULL;
unsigned long long int var_10 = 17236367449967274548ULL;
unsigned char var_14 = (unsigned char)110;
signed char var_15 = (signed char)69;
unsigned long long int var_18 = 5737572243893268589ULL;
int var_19 = -1352064326;
int zero = 0;
unsigned int var_20 = 1299330043U;
unsigned long long int var_21 = 13790749648810610197ULL;
short var_22 = (short)22391;
short var_23 = (short)29079;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
unsigned short arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)53034;
}

void checksum() {
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
