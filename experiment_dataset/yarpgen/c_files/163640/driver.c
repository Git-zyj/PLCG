#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)22957;
long long int var_4 = 6461256229756508703LL;
unsigned char var_5 = (unsigned char)59;
unsigned char var_6 = (unsigned char)42;
signed char var_7 = (signed char)48;
unsigned char var_8 = (unsigned char)32;
signed char var_9 = (signed char)60;
unsigned short var_10 = (unsigned short)43477;
int var_12 = 171068499;
int var_13 = 19699531;
unsigned long long int var_15 = 6004824761722954057ULL;
long long int var_18 = -7498106392325752293LL;
int zero = 0;
short var_20 = (short)-23260;
signed char var_21 = (signed char)-66;
unsigned char var_22 = (unsigned char)24;
long long int var_23 = 8944406530733946204LL;
long long int var_24 = 4118315949428804888LL;
unsigned short arr_2 [15] [15] ;
short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)36387;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)-11355;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
