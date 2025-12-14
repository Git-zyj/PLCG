#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -430254331;
unsigned long long int var_1 = 31522811017126406ULL;
int var_2 = -111353223;
short var_3 = (short)-18464;
unsigned long long int var_4 = 9529186814060918446ULL;
long long int var_5 = -6206940174992668711LL;
signed char var_6 = (signed char)67;
unsigned long long int var_7 = 15001206309670779978ULL;
unsigned short var_9 = (unsigned short)9069;
unsigned short var_10 = (unsigned short)56832;
unsigned long long int var_11 = 239799056855845258ULL;
int zero = 0;
short var_12 = (short)-19376;
short var_13 = (short)22427;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)8;
unsigned int var_16 = 4002522071U;
unsigned int var_17 = 2521748478U;
signed char var_18 = (signed char)113;
signed char var_19 = (signed char)-110;
short var_20 = (short)28652;
int var_21 = -1918699571;
long long int var_22 = -4009511504417428763LL;
int var_23 = 232476296;
long long int var_24 = 2749637986955674023LL;
short arr_0 [16] ;
unsigned short arr_2 [16] [16] ;
unsigned short arr_9 [17] ;
int arr_12 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-4493;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)59615;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned short)34001;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 984412182;
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
