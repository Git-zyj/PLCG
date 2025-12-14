#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29194;
unsigned int var_3 = 3748062323U;
unsigned char var_5 = (unsigned char)103;
unsigned char var_7 = (unsigned char)109;
unsigned int var_9 = 1864730332U;
unsigned long long int var_10 = 17306553816092169452ULL;
unsigned long long int var_13 = 14539419698784717742ULL;
unsigned long long int var_15 = 7389091227344880373ULL;
unsigned long long int var_17 = 14597455481297251183ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)203;
int var_20 = -1827170691;
long long int var_21 = -5929143098751386475LL;
short var_22 = (short)31760;
unsigned long long int var_23 = 17058300209877222780ULL;
long long int var_24 = -3312365267991242360LL;
unsigned long long int arr_0 [10] ;
unsigned int arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 11910233040829189972ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 1495441541U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
