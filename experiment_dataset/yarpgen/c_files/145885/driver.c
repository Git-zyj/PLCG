#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1277950925;
unsigned short var_9 = (unsigned short)30535;
unsigned char var_12 = (unsigned char)79;
int zero = 0;
unsigned char var_14 = (unsigned char)1;
signed char var_15 = (signed char)-63;
unsigned short var_16 = (unsigned short)19465;
unsigned char var_17 = (unsigned char)198;
signed char var_18 = (signed char)10;
unsigned long long int var_19 = 10784027176595712664ULL;
unsigned int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1123421333U;
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
