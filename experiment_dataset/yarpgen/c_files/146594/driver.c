#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)12;
unsigned long long int var_3 = 2137012278214736079ULL;
unsigned char var_5 = (unsigned char)92;
unsigned long long int var_6 = 1629603651111750617ULL;
short var_8 = (short)20561;
int var_11 = 152931611;
long long int var_14 = 1131307194382315710LL;
signed char var_18 = (signed char)-53;
int zero = 0;
unsigned int var_20 = 2594296596U;
short var_21 = (short)1960;
unsigned long long int var_22 = 8235474263408450615ULL;
unsigned long long int var_23 = 16576900144782853141ULL;
int var_24 = -1019589184;
unsigned long long int var_25 = 7000871816875217036ULL;
signed char var_26 = (signed char)67;
int arr_0 [12] ;
unsigned char arr_2 [12] [12] [12] ;
_Bool arr_3 [12] ;
unsigned int arr_4 [12] [12] ;
unsigned int arr_6 [12] [12] [12] ;
_Bool arr_9 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1865645066;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1191841873U : 275115720U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 783166446U : 2720505939U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
