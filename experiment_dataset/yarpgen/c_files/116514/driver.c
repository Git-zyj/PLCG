#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1154841787;
unsigned short var_7 = (unsigned short)12453;
signed char var_8 = (signed char)124;
short var_9 = (short)28571;
int zero = 0;
int var_12 = 1089614434;
signed char var_13 = (signed char)-66;
long long int var_14 = 7679442933082173433LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
