#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)240;
short var_8 = (short)-26616;
short var_9 = (short)18617;
unsigned char var_11 = (unsigned char)88;
long long int var_13 = -1121070861773797742LL;
int zero = 0;
unsigned char var_15 = (unsigned char)80;
_Bool var_16 = (_Bool)0;
long long int var_17 = 3301561610713290262LL;
signed char var_18 = (signed char)53;
short var_19 = (short)-23972;
_Bool var_20 = (_Bool)0;
long long int var_21 = -8380803005385354696LL;
unsigned int arr_3 [14] ;
long long int arr_4 [14] ;
int arr_11 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 2341182653U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 2534420328565741367LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 249318787;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
