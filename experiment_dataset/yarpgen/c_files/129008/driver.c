#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1321969452U;
unsigned char var_3 = (unsigned char)116;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 1179754266U;
unsigned int var_8 = 3344158603U;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)225;
short var_12 = (short)-8473;
unsigned long long int var_14 = 10027847821744753700ULL;
unsigned long long int var_17 = 11038331795499496535ULL;
unsigned long long int var_18 = 10566629809184061996ULL;
int zero = 0;
int var_19 = -1214795590;
unsigned int var_20 = 1082828803U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)60406;
_Bool arr_1 [21] ;
unsigned long long int arr_5 [21] [21] [21] ;
short arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1858637579197453746ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-28673;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
