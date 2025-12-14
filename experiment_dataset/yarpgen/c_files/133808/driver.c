#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5363458558467871911LL;
unsigned short var_1 = (unsigned short)29406;
unsigned short var_2 = (unsigned short)45095;
unsigned short var_3 = (unsigned short)26911;
signed char var_4 = (signed char)109;
unsigned short var_5 = (unsigned short)44823;
unsigned short var_6 = (unsigned short)54664;
unsigned short var_7 = (unsigned short)59927;
unsigned char var_8 = (unsigned char)220;
unsigned char var_9 = (unsigned char)250;
int zero = 0;
long long int var_10 = 4790308453512278944LL;
unsigned short var_11 = (unsigned short)39774;
unsigned int var_12 = 518886035U;
unsigned int var_13 = 2748240992U;
unsigned short var_14 = (unsigned short)54319;
unsigned char var_15 = (unsigned char)168;
int var_16 = -1036069933;
signed char var_17 = (signed char)60;
unsigned short var_18 = (unsigned short)31886;
unsigned short var_19 = (unsigned short)31281;
unsigned short var_20 = (unsigned short)33433;
unsigned char var_21 = (unsigned char)249;
unsigned char var_22 = (unsigned char)86;
int var_23 = 1851657964;
int var_24 = -732535389;
unsigned short var_25 = (unsigned short)44193;
short var_26 = (short)-22033;
unsigned char var_27 = (unsigned char)183;
short var_28 = (short)23613;
unsigned char var_29 = (unsigned char)88;
short var_30 = (short)20758;
int arr_26 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = -2012623333;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
