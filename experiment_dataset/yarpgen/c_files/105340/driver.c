#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -294920170;
unsigned short var_1 = (unsigned short)26447;
unsigned long long int var_5 = 10610700872171753677ULL;
unsigned char var_9 = (unsigned char)58;
unsigned long long int var_10 = 17652293313876699031ULL;
unsigned short var_12 = (unsigned short)29424;
short var_14 = (short)4158;
short var_15 = (short)10443;
int zero = 0;
short var_17 = (short)-7967;
signed char var_18 = (signed char)-85;
_Bool var_19 = (_Bool)0;
long long int var_20 = -6220622259713099962LL;
unsigned short arr_0 [20] ;
unsigned short arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)26633;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)43610;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
