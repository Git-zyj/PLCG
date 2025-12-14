#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-15778;
unsigned short var_4 = (unsigned short)63911;
int var_6 = -1249396566;
int var_7 = 745737975;
signed char var_8 = (signed char)105;
unsigned char var_10 = (unsigned char)105;
int zero = 0;
unsigned long long int var_17 = 17191808073932829667ULL;
unsigned short var_18 = (unsigned short)39777;
unsigned long long int var_19 = 6167677522527412571ULL;
short var_20 = (short)-21334;
unsigned int arr_0 [17] [17] ;
short arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 1905847387U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)19290;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
