#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1837314993;
int var_1 = -1053171084;
signed char var_2 = (signed char)103;
unsigned long long int var_4 = 17667945586443939352ULL;
long long int var_5 = 6879725871483249692LL;
long long int var_6 = -607488471586783715LL;
long long int var_8 = -2093152841389093268LL;
unsigned long long int var_10 = 12304676356290921613ULL;
signed char var_11 = (signed char)-1;
int zero = 0;
unsigned char var_12 = (unsigned char)2;
short var_13 = (short)-11412;
int var_14 = 1502134227;
short arr_1 [12] ;
int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)16207;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -328482543;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
