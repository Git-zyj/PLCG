#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1862049805566064744LL;
signed char var_2 = (signed char)79;
long long int var_3 = -6191669421337841721LL;
long long int var_6 = 5082621718200926093LL;
unsigned char var_7 = (unsigned char)133;
signed char var_8 = (signed char)112;
unsigned long long int var_11 = 12748303100239195768ULL;
short var_12 = (short)-23046;
int var_13 = -719893306;
int zero = 0;
int var_15 = -1376318700;
signed char var_16 = (signed char)63;
int var_17 = -1347087033;
unsigned short var_18 = (unsigned short)48949;
unsigned long long int var_19 = 3584962054369463177ULL;
unsigned long long int arr_1 [19] ;
_Bool arr_2 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 15175039669810559156ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
