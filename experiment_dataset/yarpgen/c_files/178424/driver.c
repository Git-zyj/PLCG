#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)209;
unsigned char var_5 = (unsigned char)28;
unsigned char var_8 = (unsigned char)127;
unsigned char var_9 = (unsigned char)136;
int zero = 0;
unsigned char var_11 = (unsigned char)189;
unsigned char var_12 = (unsigned char)146;
long long int var_13 = 4054305072792061305LL;
unsigned char var_14 = (unsigned char)58;
unsigned char var_15 = (unsigned char)192;
unsigned char var_16 = (unsigned char)64;
int var_17 = 496914495;
signed char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)50;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
