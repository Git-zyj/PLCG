#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1961845284;
unsigned long long int var_4 = 6212504871216749096ULL;
signed char var_9 = (signed char)-50;
unsigned int var_12 = 3213507960U;
signed char var_15 = (signed char)89;
int var_16 = -199525439;
signed char var_17 = (signed char)-86;
int zero = 0;
unsigned int var_19 = 1849858816U;
unsigned int var_20 = 1954618036U;
signed char var_21 = (signed char)-65;
unsigned long long int var_22 = 5514904118495603998ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
