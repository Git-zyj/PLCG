#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19809;
unsigned int var_2 = 2055027492U;
unsigned int var_4 = 1359611336U;
int var_5 = 775593702;
unsigned int var_6 = 4248301441U;
unsigned int var_8 = 4037423225U;
unsigned char var_9 = (unsigned char)144;
unsigned int var_10 = 2200653664U;
unsigned char var_11 = (unsigned char)114;
signed char var_12 = (signed char)103;
unsigned int var_13 = 168247789U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 3441778730849529274ULL;
int var_16 = -1098575172;
int var_17 = -1307791739;
long long int var_18 = 1482559975860053672LL;
int var_19 = 339111955;
_Bool var_20 = (_Bool)0;
_Bool arr_0 [13] ;
unsigned int arr_9 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3879871337U;
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
