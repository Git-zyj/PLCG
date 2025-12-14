#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)715;
signed char var_3 = (signed char)98;
unsigned short var_4 = (unsigned short)60793;
unsigned long long int var_6 = 14064538970030027086ULL;
signed char var_8 = (signed char)-32;
unsigned short var_10 = (unsigned short)33123;
unsigned int var_12 = 2901494503U;
int zero = 0;
unsigned int var_14 = 785956272U;
signed char var_15 = (signed char)-115;
signed char var_16 = (signed char)21;
long long int arr_2 [21] ;
unsigned int arr_5 [21] [21] [21] [21] ;
long long int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -7514609331345402196LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3100768249U : 4057620684U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 4869150651666941516LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
