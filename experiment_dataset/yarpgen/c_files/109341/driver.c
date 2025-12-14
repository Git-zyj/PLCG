#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
int var_2 = 1447626489;
int var_3 = -1760065719;
long long int var_4 = 2260310831492629649LL;
int var_5 = -545926434;
unsigned long long int var_12 = 1384551731655705742ULL;
long long int var_13 = -7618239441050830552LL;
int zero = 0;
int var_14 = -2093151770;
unsigned char var_15 = (unsigned char)99;
long long int var_16 = 1524009950982339662LL;
signed char var_17 = (signed char)35;
unsigned char var_18 = (unsigned char)156;
unsigned char var_19 = (unsigned char)92;
unsigned char var_20 = (unsigned char)191;
unsigned char arr_6 [16] ;
int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1551759713 : -1132673602;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
