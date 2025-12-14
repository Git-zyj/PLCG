#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2116911134370983301LL;
short var_1 = (short)11960;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 6403747069416680455ULL;
int var_6 = 1661601331;
long long int var_9 = 9084412506460250326LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = -6782508641406673988LL;
unsigned int var_12 = 1287909242U;
unsigned char var_13 = (unsigned char)88;
int zero = 0;
int var_14 = -754468592;
short var_15 = (short)-19468;
unsigned long long int var_16 = 11968335635458692239ULL;
short var_17 = (short)9124;
unsigned char var_18 = (unsigned char)216;
int arr_10 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -1804775389;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
