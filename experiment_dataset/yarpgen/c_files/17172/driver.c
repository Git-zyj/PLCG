#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8810884770798075794LL;
unsigned long long int var_1 = 13146800245412094425ULL;
signed char var_4 = (signed char)-49;
signed char var_8 = (signed char)52;
unsigned short var_10 = (unsigned short)56567;
int zero = 0;
unsigned long long int var_15 = 12839614459207955904ULL;
unsigned char var_16 = (unsigned char)81;
short var_17 = (short)-9570;
short var_18 = (short)30851;
unsigned long long int var_19 = 2672500798457876325ULL;
_Bool var_20 = (_Bool)0;
unsigned char arr_3 [20] [20] [20] ;
unsigned short arr_7 [16] ;
long long int arr_9 [16] ;
short arr_11 [16] ;
long long int arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)13933;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = -1906148943886478095LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (short)-16357;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 8228136619845138360LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
