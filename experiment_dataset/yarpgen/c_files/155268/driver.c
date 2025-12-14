#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7541117905538440540LL;
unsigned int var_3 = 834157402U;
unsigned short var_6 = (unsigned short)64475;
long long int var_7 = 5499166843399259686LL;
long long int var_11 = -9022367693195630380LL;
unsigned short var_12 = (unsigned short)53407;
signed char var_14 = (signed char)-84;
unsigned long long int var_15 = 6085337563500010434ULL;
short var_16 = (short)-11372;
unsigned char var_17 = (unsigned char)33;
int zero = 0;
unsigned short var_19 = (unsigned short)34186;
unsigned long long int var_20 = 12193989315812283552ULL;
short arr_6 [19] ;
signed char arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-13226 : (short)337;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-61 : (signed char)-53;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
