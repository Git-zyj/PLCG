#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14714534975260974848ULL;
unsigned long long int var_1 = 8811216652539930552ULL;
unsigned char var_5 = (unsigned char)236;
signed char var_7 = (signed char)-47;
unsigned long long int var_9 = 16657127977269992975ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)194;
unsigned char var_16 = (unsigned char)4;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
