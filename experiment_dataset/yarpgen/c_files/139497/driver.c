#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 248032586;
int var_2 = -507659296;
long long int var_4 = -240780019115880922LL;
int var_5 = -23302679;
short var_7 = (short)10089;
unsigned int var_8 = 1316559821U;
int var_9 = -1613250034;
int zero = 0;
long long int var_10 = 788529037071519045LL;
short var_11 = (short)-17732;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)58669;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)9572;
unsigned char arr_0 [21] ;
_Bool arr_1 [21] ;
unsigned char arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)254;
}

void checksum() {
    hash(&seed, var_10);
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
