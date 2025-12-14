#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56614;
unsigned int var_3 = 2916094267U;
unsigned int var_5 = 1481392520U;
unsigned int var_7 = 2369665331U;
signed char var_9 = (signed char)39;
unsigned short var_10 = (unsigned short)48569;
short var_11 = (short)-4640;
int zero = 0;
unsigned long long int var_12 = 5434380207078829529ULL;
unsigned short var_13 = (unsigned short)1809;
unsigned long long int var_14 = 2317182134641731646ULL;
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
