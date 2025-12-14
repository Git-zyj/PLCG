#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28595;
signed char var_3 = (signed char)13;
int var_4 = -1066647113;
unsigned int var_5 = 1806578649U;
unsigned long long int var_7 = 1116063725818414859ULL;
unsigned long long int var_8 = 1909718543223589339ULL;
signed char var_9 = (signed char)60;
long long int var_10 = 2340847727900515313LL;
int var_12 = 810489836;
int zero = 0;
long long int var_14 = -1286952563473834011LL;
signed char var_15 = (signed char)124;
signed char var_16 = (signed char)50;
unsigned long long int var_17 = 12028681853157060594ULL;
unsigned char arr_0 [12] [12] ;
unsigned int arr_2 [12] [12] ;
signed char arr_3 [12] [12] ;
unsigned long long int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 4199966309U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 17339513168150979996ULL;
}

void checksum() {
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
