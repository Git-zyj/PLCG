#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59495;
unsigned short var_2 = (unsigned short)36452;
unsigned long long int var_9 = 13306007705764708814ULL;
signed char var_11 = (signed char)67;
unsigned long long int var_12 = 7378425255487661964ULL;
int zero = 0;
signed char var_13 = (signed char)-69;
int var_14 = -1800830423;
unsigned long long int var_15 = 14646207914206407098ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
