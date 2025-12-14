#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_16 = 6535554504723880570ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)30689;
unsigned long long int var_19 = 5821293675312253342ULL;
unsigned long long int var_20 = 2421560546196645786ULL;
unsigned long long int var_21 = 17841889027788955205ULL;
unsigned short var_22 = (unsigned short)44503;
unsigned short var_23 = (unsigned short)4076;
unsigned long long int var_24 = 10928255294644485736ULL;
unsigned long long int var_25 = 14794007858410410658ULL;
unsigned short var_26 = (unsigned short)51837;
unsigned long long int var_27 = 14662836946886995344ULL;
unsigned long long int var_28 = 15473924515735708485ULL;
unsigned short var_29 = (unsigned short)19313;
unsigned short var_30 = (unsigned short)30657;
unsigned short var_31 = (unsigned short)29835;
unsigned long long int var_32 = 147874226341436723ULL;
unsigned long long int var_33 = 7589144768446486062ULL;
unsigned long long int var_34 = 15918590656099517556ULL;
unsigned short arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
unsigned short arr_4 [16] [16] [16] ;
unsigned long long int arr_5 [16] [16] ;
unsigned long long int arr_6 [16] [16] ;
unsigned short arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)28515;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 10931704097016265231ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)14143;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 5998776449749768128ULL : 13491306388475295087ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 3615258167367713399ULL : 421760573059740005ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned short)29866;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
