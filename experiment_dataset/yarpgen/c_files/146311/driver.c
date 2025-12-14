#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14138;
long long int var_2 = 8036119491279416738LL;
unsigned int var_5 = 1976264256U;
unsigned int var_10 = 2511044694U;
short var_11 = (short)-8386;
unsigned int var_15 = 740822780U;
int zero = 0;
signed char var_16 = (signed char)-69;
signed char var_17 = (signed char)-66;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
