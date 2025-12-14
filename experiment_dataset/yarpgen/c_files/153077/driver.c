#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3669521242U;
int var_2 = -337411369;
signed char var_3 = (signed char)75;
signed char var_6 = (signed char)106;
unsigned short var_8 = (unsigned short)16165;
int zero = 0;
signed char var_12 = (signed char)55;
unsigned short var_13 = (unsigned short)36559;
int var_14 = -216893743;
int var_15 = -78266100;
unsigned short var_16 = (unsigned short)46435;
int var_17 = -1601125189;
unsigned short arr_0 [10] ;
short arr_1 [10] ;
long long int arr_3 [10] [10] ;
short arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)62780;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)19447 : (short)20319;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -1145543689134248106LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-26665 : (short)-8959;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
