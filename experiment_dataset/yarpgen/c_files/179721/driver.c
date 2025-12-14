#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3111300506324488471LL;
unsigned int var_9 = 596447587U;
unsigned short var_15 = (unsigned short)51128;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-71;
unsigned short var_21 = (unsigned short)35296;
unsigned char var_22 = (unsigned char)102;
unsigned char var_23 = (unsigned char)149;
short arr_0 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-10847;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
