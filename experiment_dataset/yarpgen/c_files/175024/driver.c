#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58586;
int var_1 = -1816916852;
int var_3 = -296797271;
signed char var_4 = (signed char)92;
short var_7 = (short)-29178;
long long int var_8 = -781946460164678459LL;
int var_14 = -1291664088;
int zero = 0;
unsigned short var_15 = (unsigned short)47195;
unsigned short var_16 = (unsigned short)56401;
_Bool var_17 = (_Bool)1;
short var_18 = (short)23656;
_Bool var_19 = (_Bool)1;
short var_20 = (short)16117;
long long int arr_0 [18] ;
short arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -7417216517119513417LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-23112;
}

void checksum() {
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
