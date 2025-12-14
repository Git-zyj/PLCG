#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10793369233714509401ULL;
signed char var_4 = (signed char)86;
int var_5 = 128480246;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)102;
int var_11 = -1987773179;
int zero = 0;
unsigned short var_14 = (unsigned short)794;
unsigned short var_15 = (unsigned short)13625;
unsigned long long int var_16 = 15689111196314158177ULL;
long long int var_17 = 6454211323688794890LL;
unsigned int var_18 = 1714960243U;
unsigned long long int arr_0 [15] ;
int arr_3 [15] ;
long long int arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 10932912944479576894ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 555791501;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -3382963049774674477LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
