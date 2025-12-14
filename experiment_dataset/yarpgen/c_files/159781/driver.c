#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30276;
int var_7 = -261056683;
int zero = 0;
short var_20 = (short)7138;
long long int var_21 = 2675608360405327706LL;
unsigned long long int var_22 = 12864579948906368502ULL;
unsigned short var_23 = (unsigned short)32349;
unsigned long long int var_24 = 6229383972669503177ULL;
_Bool var_25 = (_Bool)0;
unsigned short arr_0 [11] ;
signed char arr_1 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)15717;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-9;
}

void checksum() {
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
