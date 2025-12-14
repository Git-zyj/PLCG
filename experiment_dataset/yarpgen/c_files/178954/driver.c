#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16571;
int var_3 = 1521962816;
unsigned int var_7 = 3301039514U;
long long int var_8 = 3860475858318225537LL;
unsigned long long int var_9 = 3383775349335416629ULL;
unsigned long long int var_10 = 10611011540437927308ULL;
short var_12 = (short)32568;
int zero = 0;
unsigned long long int var_13 = 9591415590180446568ULL;
short var_14 = (short)32091;
short var_15 = (short)-31814;
short var_16 = (short)-31257;
_Bool var_17 = (_Bool)1;
unsigned long long int arr_2 [22] [22] [22] ;
unsigned long long int arr_3 [22] [22] ;
signed char arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 7140756059545676466ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 17083998384954000109ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)75;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
