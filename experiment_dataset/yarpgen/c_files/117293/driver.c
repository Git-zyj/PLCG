#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1785127322;
short var_1 = (short)32696;
short var_2 = (short)-3203;
short var_3 = (short)-27284;
short var_4 = (short)7632;
short var_5 = (short)4971;
short var_6 = (short)20305;
int var_7 = 19431544;
int var_8 = 1865543907;
short var_10 = (short)31384;
int zero = 0;
int var_11 = -442327296;
short var_12 = (short)1616;
short var_13 = (short)-21902;
int var_14 = -511036538;
short var_15 = (short)1672;
int var_16 = 1084443447;
short var_17 = (short)-31059;
short var_18 = (short)12117;
int var_19 = 1596595513;
short arr_0 [10] [10] ;
int arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-26501;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -1816240288;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
