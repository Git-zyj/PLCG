#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -535057029;
unsigned int var_1 = 4146461076U;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 2677013905539802685ULL;
unsigned short var_5 = (unsigned short)38069;
int var_6 = 756481217;
int var_7 = 1085611984;
_Bool var_8 = (_Bool)1;
int var_9 = 625120949;
int zero = 0;
short var_12 = (short)-6601;
int var_13 = -1553450532;
unsigned char var_14 = (unsigned char)9;
unsigned int var_15 = 1259151120U;
unsigned int arr_0 [16] [16] ;
short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 892204219U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-24649;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
