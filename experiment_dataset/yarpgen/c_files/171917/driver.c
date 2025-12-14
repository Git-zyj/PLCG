#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
long long int var_6 = -524693053759464764LL;
unsigned char var_7 = (unsigned char)63;
unsigned short var_9 = (unsigned short)5055;
unsigned int var_13 = 705569562U;
unsigned char var_14 = (unsigned char)72;
int zero = 0;
long long int var_18 = 4637147020066977609LL;
unsigned char var_19 = (unsigned char)175;
signed char var_20 = (signed char)10;
unsigned int var_21 = 2381262836U;
unsigned short var_22 = (unsigned short)12844;
unsigned short arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)24656 : (unsigned short)22660;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
