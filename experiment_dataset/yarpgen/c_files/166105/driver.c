#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3103391970336845312LL;
unsigned short var_4 = (unsigned short)30602;
unsigned char var_5 = (unsigned char)166;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)18348;
unsigned int var_8 = 2646595501U;
unsigned int var_9 = 787976755U;
unsigned long long int var_10 = 8574950377992373303ULL;
unsigned short var_12 = (unsigned short)48169;
int zero = 0;
unsigned long long int var_13 = 11313298835182292406ULL;
int var_14 = 127123251;
unsigned short var_15 = (unsigned short)64903;
unsigned char var_16 = (unsigned char)188;
unsigned int var_17 = 3259542688U;
signed char var_18 = (signed char)-63;
unsigned short arr_3 [21] [21] ;
_Bool arr_5 [21] [21] ;
unsigned short arr_8 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)29153;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)5154 : (unsigned short)54064;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
