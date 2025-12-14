#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3835;
signed char var_2 = (signed char)27;
short var_3 = (short)20540;
unsigned long long int var_4 = 9911447171508503956ULL;
long long int var_5 = 3419596226180466624LL;
unsigned short var_6 = (unsigned short)64922;
short var_8 = (short)23926;
unsigned char var_10 = (unsigned char)98;
long long int var_11 = 1435721384115701140LL;
unsigned int var_13 = 1056339588U;
unsigned int var_14 = 2316535071U;
int zero = 0;
unsigned short var_15 = (unsigned short)8013;
signed char var_16 = (signed char)-76;
int var_17 = -1651443765;
unsigned char var_18 = (unsigned char)188;
unsigned short var_19 = (unsigned short)64927;
int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1410169994 : -1351710476;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
