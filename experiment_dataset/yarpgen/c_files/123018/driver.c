#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13964785168299580569ULL;
signed char var_2 = (signed char)-44;
unsigned int var_5 = 2343808087U;
unsigned int var_6 = 1704461481U;
unsigned short var_8 = (unsigned short)63023;
int zero = 0;
long long int var_10 = 9130065937258418053LL;
unsigned long long int var_11 = 1001121690629522005ULL;
short var_12 = (short)27674;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
