#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
unsigned short var_2 = (unsigned short)26799;
unsigned int var_3 = 1033640659U;
signed char var_6 = (signed char)125;
signed char var_9 = (signed char)-75;
signed char var_10 = (signed char)92;
unsigned char var_11 = (unsigned char)138;
unsigned short var_12 = (unsigned short)18016;
int zero = 0;
unsigned long long int var_13 = 9113959770668814441ULL;
unsigned int var_14 = 1650625150U;
int var_15 = -1150496120;
long long int var_16 = -6704949509605763737LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
