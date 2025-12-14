#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5346693014447555357ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)44080;
unsigned char var_7 = (unsigned char)208;
short var_8 = (short)-2800;
unsigned long long int var_10 = 6743230446616518620ULL;
unsigned long long int var_11 = 3213034144385626889ULL;
long long int var_12 = 8829907160420696792LL;
int zero = 0;
long long int var_13 = -4122399478034980756LL;
unsigned char var_14 = (unsigned char)218;
_Bool var_15 = (_Bool)1;
long long int var_16 = -8191477069935949747LL;
long long int var_17 = -4463453227204438389LL;
short arr_2 [25] [25] ;
short arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)19581;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-13630 : (short)15488;
}

void checksum() {
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
