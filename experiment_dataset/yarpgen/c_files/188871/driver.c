#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2548018423027124079ULL;
long long int var_5 = -4906485316102870452LL;
unsigned char var_6 = (unsigned char)3;
short var_12 = (short)24335;
short var_13 = (short)-10125;
int zero = 0;
int var_14 = 1939442775;
unsigned long long int var_15 = 8336426687074671066ULL;
unsigned short var_16 = (unsigned short)36254;
short var_17 = (short)25753;
short var_18 = (short)-5135;
unsigned int var_19 = 301097700U;
long long int var_20 = -7465166193300156109LL;
unsigned long long int var_21 = 8598159187048506240ULL;
int arr_0 [10] [10] ;
int arr_1 [10] ;
unsigned char arr_2 [10] ;
_Bool arr_3 [10] ;
unsigned int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -1230618983;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -822326949;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 293081492U : 1627306827U;
}

void checksum() {
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
