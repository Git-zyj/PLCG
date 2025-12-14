#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 742988685;
unsigned char var_3 = (unsigned char)102;
unsigned long long int var_4 = 14473656364082300211ULL;
signed char var_10 = (signed char)-49;
unsigned long long int var_17 = 10775128958480911056ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)89;
long long int var_19 = -5653236398074863801LL;
unsigned long long int var_20 = 16538386153714398937ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
