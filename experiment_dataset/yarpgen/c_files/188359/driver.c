#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7966;
int var_4 = 2145216176;
unsigned short var_5 = (unsigned short)39936;
unsigned long long int var_6 = 14853557101413558567ULL;
unsigned long long int var_7 = 4749265001242403275ULL;
long long int var_9 = 2173777830229659767LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)12184;
short var_12 = (short)31483;
unsigned long long int var_13 = 4304321057290232478ULL;
unsigned char var_14 = (unsigned char)250;
long long int var_15 = -1102282030598819863LL;
long long int var_16 = 3014320234415293673LL;
long long int var_17 = -5705502668097652842LL;
unsigned long long int arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 12585062474072269318ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
