#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1875035463738612517LL;
long long int var_6 = -263658748656695173LL;
int var_7 = -1623152315;
long long int var_9 = -1370994249222900438LL;
unsigned short var_11 = (unsigned short)260;
int zero = 0;
signed char var_14 = (signed char)-49;
long long int var_15 = 7910889063702833612LL;
signed char var_16 = (signed char)-94;
int var_17 = 1755207708;
_Bool var_18 = (_Bool)1;
_Bool arr_3 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
