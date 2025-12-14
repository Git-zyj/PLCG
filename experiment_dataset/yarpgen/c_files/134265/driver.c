#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
short var_1 = (short)14404;
unsigned char var_2 = (unsigned char)164;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 8111629732264587419ULL;
long long int var_9 = 6429680550728785713LL;
long long int var_10 = 7068045088195074413LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)120;
unsigned char var_13 = (unsigned char)1;
unsigned int var_14 = 400311598U;
unsigned short var_15 = (unsigned short)8921;
unsigned long long int var_16 = 1674757623908800673ULL;
long long int var_17 = -264697914280488792LL;
unsigned int var_18 = 2803970291U;
unsigned char var_19 = (unsigned char)67;
unsigned long long int var_20 = 6073337895837498531ULL;
long long int var_21 = 6948674473253857649LL;
unsigned char var_22 = (unsigned char)186;
unsigned long long int var_23 = 6187857517468532517ULL;
short var_24 = (short)18712;
int var_25 = -1676996601;
long long int var_26 = 97630382499258082LL;
long long int var_27 = -3051164635592663024LL;
unsigned char var_28 = (unsigned char)169;
unsigned char var_29 = (unsigned char)238;
_Bool arr_0 [24] ;
unsigned short arr_1 [24] ;
unsigned short arr_7 [24] [24] ;
unsigned char arr_8 [24] [24] [24] ;
unsigned long long int arr_10 [14] ;
unsigned short arr_13 [14] [14] ;
unsigned int arr_18 [21] ;
long long int arr_17 [14] [14] [14] [14] ;
unsigned char arr_21 [21] ;
_Bool arr_22 [21] ;
long long int arr_30 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)19650;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)39493;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 18002347641874032286ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)4009;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = 1116427646U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -8963986491486068661LL : -4600947494598667420LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -6991598084451579201LL : 731869525595193956LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
