#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2895315370U;
unsigned long long int var_2 = 4443653392131942772ULL;
int var_3 = -411457639;
int var_4 = -922971438;
long long int var_7 = -3096878075496262828LL;
unsigned long long int var_10 = 5289995516515893886ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)4796;
unsigned char var_20 = (unsigned char)226;
unsigned short var_21 = (unsigned short)13434;
int var_22 = 1264002513;
unsigned short var_23 = (unsigned short)39320;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)25844;
unsigned int var_26 = 3621054559U;
unsigned short var_27 = (unsigned short)34441;
unsigned short var_28 = (unsigned short)15289;
_Bool var_29 = (_Bool)0;
unsigned char arr_2 [12] ;
unsigned long long int arr_3 [12] ;
unsigned long long int arr_7 [25] ;
unsigned char arr_8 [25] ;
unsigned short arr_13 [25] [25] [25] [25] ;
int arr_14 [25] [25] [25] ;
unsigned long long int arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 6884502056087856319ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 3371188115002506498ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31073;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -64293006;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = 5310117368764677008ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
