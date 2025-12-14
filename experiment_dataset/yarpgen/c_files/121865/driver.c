#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1093023218847244910ULL;
unsigned int var_6 = 563844624U;
_Bool var_7 = (_Bool)0;
int var_8 = -941278492;
unsigned long long int var_15 = 17156850972666981195ULL;
int zero = 0;
unsigned int var_20 = 2555567273U;
int var_21 = 1501761959;
signed char var_22 = (signed char)-28;
void init() {
}

void checksum() {
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
