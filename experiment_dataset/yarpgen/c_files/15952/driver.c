#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 349089615;
int var_6 = 983969229;
unsigned long long int var_7 = 4078803363872010087ULL;
unsigned short var_8 = (unsigned short)11755;
unsigned short var_14 = (unsigned short)1469;
int zero = 0;
unsigned long long int var_19 = 17495278088776674880ULL;
signed char var_20 = (signed char)-2;
unsigned int var_21 = 2644575650U;
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
