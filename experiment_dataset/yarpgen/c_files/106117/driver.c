#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 43703341U;
unsigned short var_5 = (unsigned short)38832;
unsigned long long int var_6 = 16908761285791487427ULL;
short var_7 = (short)-27892;
short var_8 = (short)-2369;
signed char var_9 = (signed char)-105;
unsigned long long int var_10 = 12804996654000386600ULL;
unsigned long long int var_11 = 1965044695570207376ULL;
int zero = 0;
unsigned int var_12 = 901291543U;
signed char var_13 = (signed char)-5;
signed char var_14 = (signed char)9;
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
