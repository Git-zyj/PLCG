#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4263447447U;
unsigned short var_1 = (unsigned short)4971;
signed char var_2 = (signed char)-52;
short var_4 = (short)10871;
unsigned long long int var_6 = 13322761518306401062ULL;
unsigned short var_8 = (unsigned short)56176;
int var_9 = 1664771550;
int zero = 0;
short var_10 = (short)-10719;
long long int var_11 = -8284606272221743168LL;
short var_12 = (short)24562;
short var_13 = (short)16311;
unsigned short var_14 = (unsigned short)51934;
int var_15 = -971027903;
unsigned short var_16 = (unsigned short)9995;
short var_17 = (short)10265;
_Bool arr_0 [23] ;
int arr_4 [23] [23] ;
int arr_8 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1772636995 : -2138112751;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -315271861;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
