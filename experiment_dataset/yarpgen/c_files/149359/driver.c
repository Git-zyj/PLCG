#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31061;
long long int var_3 = -3979625630164871670LL;
unsigned int var_4 = 759481801U;
short var_5 = (short)6924;
signed char var_6 = (signed char)43;
unsigned int var_9 = 1567879602U;
unsigned long long int var_10 = 16714365708372832395ULL;
short var_11 = (short)-20903;
unsigned int var_12 = 1530721244U;
unsigned int var_13 = 1464793907U;
int zero = 0;
unsigned int var_14 = 972065597U;
short var_15 = (short)12057;
unsigned long long int var_16 = 10642784438967258586ULL;
unsigned char var_17 = (unsigned char)248;
unsigned char var_18 = (unsigned char)46;
unsigned char arr_1 [21] ;
unsigned char arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)251 : (unsigned char)71;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
