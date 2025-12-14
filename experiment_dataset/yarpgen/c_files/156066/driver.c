#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1403495255;
unsigned char var_2 = (unsigned char)88;
long long int var_4 = 6787809826076598219LL;
signed char var_5 = (signed char)106;
unsigned int var_8 = 247584350U;
unsigned int var_9 = 3500535641U;
int var_10 = -988727787;
int zero = 0;
long long int var_11 = 3042815444128065342LL;
unsigned int var_12 = 3851831016U;
long long int var_13 = 776288202527742554LL;
long long int var_14 = -6569460019581827133LL;
unsigned int var_15 = 3912353291U;
long long int var_16 = -4043946468520447056LL;
unsigned short var_17 = (unsigned short)44883;
int var_18 = -1758480268;
int arr_9 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -374148152;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
