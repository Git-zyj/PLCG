#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2181615010U;
unsigned short var_1 = (unsigned short)56751;
short var_2 = (short)25459;
unsigned int var_5 = 513502711U;
unsigned long long int var_7 = 6165172050349757031ULL;
unsigned int var_9 = 3500999731U;
unsigned short var_10 = (unsigned short)7808;
int zero = 0;
unsigned int var_11 = 2714879064U;
short var_12 = (short)-24873;
unsigned short var_13 = (unsigned short)39531;
unsigned char var_14 = (unsigned char)105;
unsigned short arr_3 [10] [10] ;
long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)2823;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 8122933590786265530LL : -8898865741229115775LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
