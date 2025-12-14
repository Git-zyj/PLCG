#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1864664676;
short var_1 = (short)21706;
long long int var_3 = 4681019577383794640LL;
unsigned short var_4 = (unsigned short)34041;
unsigned short var_6 = (unsigned short)18746;
unsigned short var_8 = (unsigned short)56842;
int var_9 = 103660394;
unsigned long long int var_10 = 18092061532656737014ULL;
int zero = 0;
signed char var_11 = (signed char)-19;
long long int var_12 = -4917903137590080438LL;
long long int var_13 = 8696332741795389017LL;
unsigned long long int var_14 = 1227317875639648349ULL;
signed char var_15 = (signed char)-51;
long long int var_16 = 8576686903070667025LL;
short var_17 = (short)15195;
unsigned char var_18 = (unsigned char)72;
int arr_1 [12] [12] ;
int arr_2 [25] ;
unsigned long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 250524279;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1973644423 : -1175070641;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 10418345779863136920ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
