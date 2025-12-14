#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 143492775U;
unsigned short var_11 = (unsigned short)122;
unsigned int var_12 = 3104939365U;
signed char var_13 = (signed char)-49;
int zero = 0;
unsigned short var_14 = (unsigned short)52150;
signed char var_15 = (signed char)-82;
_Bool var_16 = (_Bool)1;
int var_17 = 1131747829;
unsigned long long int var_18 = 14312367703880624107ULL;
short var_19 = (short)10019;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-25083;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
