#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24801;
unsigned long long int var_3 = 1806264250124868743ULL;
unsigned long long int var_6 = 14956355621813754676ULL;
unsigned short var_8 = (unsigned short)6082;
unsigned short var_9 = (unsigned short)41204;
int zero = 0;
int var_10 = 2109437447;
unsigned short var_11 = (unsigned short)49857;
unsigned int var_12 = 1942430741U;
unsigned int var_13 = 3549908376U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
