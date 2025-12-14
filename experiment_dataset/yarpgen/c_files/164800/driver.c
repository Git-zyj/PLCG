#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20474;
unsigned int var_5 = 212832504U;
int var_7 = -791658467;
unsigned int var_16 = 4273151035U;
int var_17 = -1896914985;
signed char var_18 = (signed char)-35;
int zero = 0;
signed char var_19 = (signed char)3;
unsigned long long int var_20 = 5272485081166097585ULL;
unsigned long long int var_21 = 9656312793031932127ULL;
int var_22 = -259915325;
short var_23 = (short)-6151;
unsigned char var_24 = (unsigned char)124;
signed char var_25 = (signed char)64;
unsigned int var_26 = 2971966851U;
unsigned char var_27 = (unsigned char)242;
signed char var_28 = (signed char)17;
signed char arr_0 [20] ;
signed char arr_1 [20] [20] ;
long long int arr_2 [20] [20] ;
_Bool arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1981035083555142800LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
