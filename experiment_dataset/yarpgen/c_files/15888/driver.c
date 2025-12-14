#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5898620329491273521ULL;
unsigned short var_7 = (unsigned short)22856;
unsigned long long int var_8 = 10127658475218559331ULL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-11738;
int zero = 0;
unsigned long long int var_13 = 14300974636308643507ULL;
unsigned long long int var_14 = 8431570697348681094ULL;
short var_15 = (short)14972;
unsigned short var_16 = (unsigned short)11302;
signed char var_17 = (signed char)124;
long long int var_18 = -3833496048387625489LL;
signed char var_19 = (signed char)117;
short var_20 = (short)10286;
short var_21 = (short)-25943;
unsigned short var_22 = (unsigned short)38485;
unsigned short arr_1 [21] ;
unsigned short arr_6 [14] [14] ;
signed char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)51262;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)39148;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)107;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
