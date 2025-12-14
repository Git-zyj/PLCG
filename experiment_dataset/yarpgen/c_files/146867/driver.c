#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18335992743137125887ULL;
unsigned char var_12 = (unsigned char)32;
short var_13 = (short)-10107;
unsigned int var_15 = 2640473906U;
unsigned char var_16 = (unsigned char)171;
int zero = 0;
unsigned int var_19 = 4007884535U;
short var_20 = (short)8969;
unsigned char var_21 = (unsigned char)219;
signed char var_22 = (signed char)89;
void init() {
}

void checksum() {
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
