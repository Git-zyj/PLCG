#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29642;
signed char var_2 = (signed char)-69;
long long int var_3 = 4535821875142718426LL;
unsigned char var_4 = (unsigned char)57;
unsigned long long int var_5 = 16109028279853179945ULL;
long long int var_6 = 8697565628401218161LL;
unsigned short var_8 = (unsigned short)47696;
int zero = 0;
short var_14 = (short)-2419;
short var_15 = (short)-16583;
short var_16 = (short)22970;
unsigned int var_17 = 248779507U;
unsigned char var_18 = (unsigned char)9;
signed char var_19 = (signed char)94;
short var_20 = (short)28317;
long long int arr_0 [14] ;
unsigned int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -8469673987790122014LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 4025827873U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
