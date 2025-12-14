#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)36;
unsigned char var_17 = (unsigned char)129;
int zero = 0;
signed char var_19 = (signed char)111;
short var_20 = (short)-10894;
long long int var_21 = 2013709660433896239LL;
unsigned char var_22 = (unsigned char)255;
unsigned long long int var_23 = 15184666438274924305ULL;
int var_24 = 358240388;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
long long int arr_7 [17] [17] [17] ;
unsigned int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3893123093856030247LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 766740111U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
