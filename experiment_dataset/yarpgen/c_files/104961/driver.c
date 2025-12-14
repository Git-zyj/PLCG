#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = 284537927;
unsigned long long int var_7 = 1953517729151806828ULL;
unsigned short var_9 = (unsigned short)60870;
int zero = 0;
unsigned long long int var_11 = 2117480679444339838ULL;
unsigned char var_12 = (unsigned char)190;
signed char var_13 = (signed char)-6;
short var_14 = (short)-5159;
short var_15 = (short)-8369;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
