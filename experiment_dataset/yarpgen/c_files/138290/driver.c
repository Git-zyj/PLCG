#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26878;
unsigned short var_3 = (unsigned short)28480;
unsigned int var_4 = 1081072995U;
unsigned int var_9 = 370430955U;
long long int var_11 = -1459842768144697699LL;
int zero = 0;
unsigned int var_14 = 2881330027U;
unsigned long long int var_15 = 15720960868685633748ULL;
short var_16 = (short)-25162;
unsigned short var_17 = (unsigned short)48686;
unsigned short var_18 = (unsigned short)19075;
unsigned int var_19 = 1988927541U;
signed char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-63;
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
