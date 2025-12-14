#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53405;
unsigned short var_4 = (unsigned short)63043;
int var_11 = 1288242644;
unsigned int var_13 = 1999669713U;
int zero = 0;
int var_19 = 1939290925;
unsigned char var_20 = (unsigned char)175;
unsigned int var_21 = 1809760065U;
void init() {
}

void checksum() {
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
