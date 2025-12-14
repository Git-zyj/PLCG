#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17059903188747420275ULL;
unsigned short var_1 = (unsigned short)11935;
unsigned int var_4 = 2646799706U;
unsigned long long int var_6 = 1629977274077523311ULL;
short var_14 = (short)4317;
signed char var_16 = (signed char)-48;
unsigned long long int var_17 = 965799584202288241ULL;
unsigned short var_18 = (unsigned short)14061;
int zero = 0;
signed char var_19 = (signed char)-125;
unsigned short var_20 = (unsigned short)52699;
unsigned int var_21 = 226910172U;
signed char var_22 = (signed char)-83;
unsigned int var_23 = 3139192270U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
