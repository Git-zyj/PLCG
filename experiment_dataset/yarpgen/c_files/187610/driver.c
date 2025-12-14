#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 638642123;
unsigned short var_1 = (unsigned short)59375;
int var_3 = -1199855528;
_Bool var_4 = (_Bool)0;
unsigned char var_10 = (unsigned char)110;
int zero = 0;
unsigned long long int var_11 = 10544875464851200887ULL;
short var_12 = (short)23051;
_Bool var_13 = (_Bool)1;
int var_14 = 601188711;
short var_15 = (short)-25963;
unsigned short arr_0 [21] [21] ;
_Bool arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)52479;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
