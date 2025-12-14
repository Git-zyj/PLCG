#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
long long int var_2 = 609684175761746792LL;
unsigned char var_3 = (unsigned char)252;
short var_6 = (short)21474;
unsigned short var_8 = (unsigned short)41394;
long long int var_10 = 5913488839318777822LL;
int zero = 0;
long long int var_12 = 7171584151571721663LL;
long long int var_13 = 5944790206365892053LL;
long long int var_14 = -8896126465822872532LL;
unsigned char var_15 = (unsigned char)208;
long long int var_16 = -6206199188788721394LL;
short var_17 = (short)26650;
long long int var_18 = -2598589419978860871LL;
unsigned char var_19 = (unsigned char)103;
unsigned char var_20 = (unsigned char)73;
signed char var_21 = (signed char)53;
unsigned char var_22 = (unsigned char)182;
unsigned char var_23 = (unsigned char)249;
unsigned char var_24 = (unsigned char)208;
unsigned int var_25 = 1657196185U;
long long int var_26 = -6227368368465078050LL;
unsigned char var_27 = (unsigned char)31;
unsigned short arr_9 [24] ;
unsigned short arr_19 [15] ;
short arr_24 [10] ;
short arr_27 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56434 : (unsigned short)61110;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (unsigned short)21476;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (short)-15499;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_27 [i_0] [i_1] = (short)-31168;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
