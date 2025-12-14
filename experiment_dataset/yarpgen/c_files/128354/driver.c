#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)3637;
unsigned short var_9 = (unsigned short)58645;
unsigned long long int var_11 = 5735809261287987810ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)28664;
unsigned short var_14 = (unsigned short)25760;
unsigned char var_15 = (unsigned char)107;
signed char var_16 = (signed char)4;
unsigned short var_17 = (unsigned short)32715;
short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)13613;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
