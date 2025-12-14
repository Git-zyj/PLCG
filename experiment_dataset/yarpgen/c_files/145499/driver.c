#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4232;
unsigned char var_5 = (unsigned char)88;
short var_7 = (short)21933;
unsigned long long int var_11 = 4607408576764657576ULL;
signed char var_15 = (signed char)-44;
signed char var_16 = (signed char)81;
short var_17 = (short)10717;
int zero = 0;
unsigned long long int var_20 = 11870190015859956345ULL;
signed char var_21 = (signed char)-25;
void init() {
}

void checksum() {
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
