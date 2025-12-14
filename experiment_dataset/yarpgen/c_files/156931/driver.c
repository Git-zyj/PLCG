#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56058;
unsigned short var_2 = (unsigned short)65001;
unsigned short var_3 = (unsigned short)7926;
unsigned short var_5 = (unsigned short)45191;
unsigned short var_6 = (unsigned short)37031;
unsigned short var_7 = (unsigned short)31826;
unsigned short var_8 = (unsigned short)25445;
unsigned short var_10 = (unsigned short)460;
int zero = 0;
unsigned short var_11 = (unsigned short)36290;
unsigned short var_12 = (unsigned short)1021;
unsigned short var_13 = (unsigned short)60071;
unsigned short var_14 = (unsigned short)47256;
unsigned short var_15 = (unsigned short)28557;
unsigned short var_16 = (unsigned short)19791;
unsigned short var_17 = (unsigned short)7609;
unsigned short var_18 = (unsigned short)3003;
unsigned short var_19 = (unsigned short)25655;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47899 : (unsigned short)61366;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
