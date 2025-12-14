#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2238929160U;
unsigned long long int var_9 = 8414018298338301686ULL;
unsigned long long int var_12 = 57524053748896541ULL;
signed char var_14 = (signed char)-39;
int var_16 = -1936070758;
int zero = 0;
short var_18 = (short)18939;
signed char var_19 = (signed char)-19;
unsigned long long int var_20 = 1546194718506659272ULL;
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
