#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)80;
int var_2 = -348439439;
int var_3 = -1958667286;
unsigned long long int var_5 = 845463007055650089ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)198;
unsigned char var_11 = (unsigned char)97;
int zero = 0;
unsigned short var_13 = (unsigned short)13754;
unsigned long long int var_14 = 4032606666034600658ULL;
unsigned char var_15 = (unsigned char)229;
long long int var_16 = 7646855869822443689LL;
unsigned short var_17 = (unsigned short)58986;
long long int arr_0 [17] [17] ;
unsigned int arr_2 [17] [17] [17] ;
_Bool arr_3 [17] ;
long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 4453167324452904571LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 880867836U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 532805030607027997LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
