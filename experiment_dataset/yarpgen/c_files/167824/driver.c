#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10239248187029207045ULL;
signed char var_4 = (signed char)-76;
short var_6 = (short)19048;
long long int var_7 = -8751622026922914363LL;
int var_9 = -2104034464;
int zero = 0;
unsigned short var_16 = (unsigned short)52940;
unsigned char var_17 = (unsigned char)213;
unsigned long long int var_18 = 9802631083277244736ULL;
unsigned char var_19 = (unsigned char)164;
unsigned int var_20 = 1347461961U;
int var_21 = -1219699389;
unsigned short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)4523;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
