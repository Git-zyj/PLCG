#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28349;
unsigned int var_5 = 302675941U;
short var_8 = (short)-15276;
int var_15 = -70145060;
int zero = 0;
short var_18 = (short)21031;
unsigned long long int var_19 = 6856399008653524326ULL;
unsigned short var_20 = (unsigned short)27235;
int var_21 = 2130999904;
int var_22 = 1777026870;
unsigned char var_23 = (unsigned char)41;
unsigned long long int var_24 = 4180473879755724317ULL;
long long int var_25 = -3404252906651977912LL;
long long int arr_0 [13] ;
long long int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -191938972386738733LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 3600804963320364966LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
