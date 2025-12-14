#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1374460126U;
unsigned short var_5 = (unsigned short)61562;
unsigned int var_9 = 2010618883U;
signed char var_12 = (signed char)-78;
int zero = 0;
unsigned long long int var_18 = 4185928416757912103ULL;
short var_19 = (short)-27318;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
