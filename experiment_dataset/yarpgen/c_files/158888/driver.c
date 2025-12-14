#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9044293565050909459ULL;
signed char var_3 = (signed char)33;
unsigned int var_4 = 1177827065U;
unsigned int var_7 = 3511259429U;
signed char var_9 = (signed char)102;
unsigned int var_10 = 1131276738U;
unsigned long long int var_11 = 12956807595710492022ULL;
unsigned char var_14 = (unsigned char)153;
int zero = 0;
unsigned int var_15 = 560186978U;
signed char var_16 = (signed char)-63;
unsigned short var_17 = (unsigned short)47402;
unsigned int var_18 = 1865069981U;
unsigned long long int var_19 = 10346150340462890601ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
