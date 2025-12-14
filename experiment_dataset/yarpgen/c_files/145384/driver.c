#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 877430634;
unsigned char var_2 = (unsigned char)88;
int var_5 = -406787507;
long long int var_6 = -3688169691418709278LL;
short var_10 = (short)3110;
unsigned char var_12 = (unsigned char)212;
unsigned short var_14 = (unsigned short)3428;
int zero = 0;
short var_15 = (short)31742;
unsigned int var_16 = 492582061U;
long long int var_17 = 8709211441495524179LL;
unsigned int var_18 = 715132589U;
unsigned long long int var_19 = 14679865316525094329ULL;
unsigned char var_20 = (unsigned char)84;
unsigned char var_21 = (unsigned char)209;
long long int var_22 = 5246620967126010933LL;
unsigned long long int var_23 = 8982726001373002639ULL;
int var_24 = -1791772476;
unsigned char arr_0 [20] ;
int arr_1 [20] ;
unsigned char arr_3 [17] ;
unsigned int arr_4 [17] ;
long long int arr_5 [17] ;
unsigned char arr_9 [17] ;
_Bool arr_2 [20] [20] ;
unsigned short arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -1645750111;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2761170635U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -7965734566574084679LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)13235;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
