#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1844356803;
long long int var_2 = -2879070354417718905LL;
short var_4 = (short)-3485;
long long int var_5 = 6829988680378382719LL;
unsigned int var_6 = 930660680U;
int var_7 = 935886466;
long long int var_18 = 3785437641344034544LL;
short var_19 = (short)13448;
int zero = 0;
unsigned int var_20 = 1577372063U;
unsigned long long int var_21 = 11087676877706300534ULL;
int var_22 = 1757843146;
long long int var_23 = 4472917226757566080LL;
long long int var_24 = 6427675556562633208LL;
long long int var_25 = 1726318459569406156LL;
unsigned long long int arr_0 [23] [23] ;
_Bool arr_1 [23] [23] ;
short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 7201268289423734951ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-24848;
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
