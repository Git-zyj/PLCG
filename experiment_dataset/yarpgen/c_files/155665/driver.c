#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
unsigned char var_2 = (unsigned char)107;
unsigned char var_3 = (unsigned char)121;
unsigned char var_4 = (unsigned char)37;
short var_5 = (short)23175;
unsigned char var_8 = (unsigned char)95;
short var_9 = (short)-16946;
long long int var_11 = 7627533754862455521LL;
int zero = 0;
short var_14 = (short)-16069;
signed char var_15 = (signed char)49;
unsigned char var_16 = (unsigned char)80;
signed char var_17 = (signed char)49;
signed char var_18 = (signed char)-39;
unsigned char var_19 = (unsigned char)12;
unsigned char arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)242;
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
