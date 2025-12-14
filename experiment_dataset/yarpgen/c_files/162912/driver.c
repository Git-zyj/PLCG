#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3526605293472127097LL;
unsigned char var_4 = (unsigned char)103;
long long int var_6 = 3918327883150779419LL;
int var_7 = 654366148;
signed char var_8 = (signed char)112;
signed char var_9 = (signed char)57;
unsigned long long int var_10 = 8974893312311139552ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)29410;
unsigned short var_14 = (unsigned short)14921;
long long int var_15 = 7508972997352251926LL;
long long int var_16 = -611491233987761581LL;
unsigned long long int var_17 = 6359917935023669751ULL;
unsigned long long int var_18 = 11201158932548053682ULL;
unsigned long long int var_19 = 9928404094730478626ULL;
unsigned short var_20 = (unsigned short)63429;
int var_21 = 473377263;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_4 [15] [15] [15] ;
int arr_10 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1696219441207102383ULL : 14771133035826722414ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 5046658878888611537ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -691224064;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
