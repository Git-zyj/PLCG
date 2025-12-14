#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2037339089;
signed char var_1 = (signed char)25;
unsigned int var_4 = 2847532840U;
unsigned char var_6 = (unsigned char)177;
unsigned int var_9 = 2193932188U;
unsigned char var_10 = (unsigned char)43;
int var_11 = 541490023;
int zero = 0;
signed char var_12 = (signed char)-77;
int var_13 = -1264989265;
signed char var_14 = (signed char)-61;
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
