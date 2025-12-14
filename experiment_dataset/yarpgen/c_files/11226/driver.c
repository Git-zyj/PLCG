#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)58843;
long long int var_5 = 1340044572515361216LL;
unsigned long long int var_6 = 1588263847035370396ULL;
long long int var_9 = 2450917894468467975LL;
unsigned long long int var_11 = 12568237922283622357ULL;
unsigned short var_13 = (unsigned short)43048;
unsigned long long int var_14 = 5488338340946237031ULL;
signed char var_15 = (signed char)-80;
unsigned long long int var_16 = 6326349673072391684ULL;
int var_17 = 368701086;
int zero = 0;
unsigned long long int var_18 = 16674666183379812643ULL;
unsigned short var_19 = (unsigned short)50585;
unsigned int var_20 = 1088955584U;
signed char var_21 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
