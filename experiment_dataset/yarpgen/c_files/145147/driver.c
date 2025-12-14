#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)14392;
unsigned char var_5 = (unsigned char)44;
unsigned short var_7 = (unsigned short)65048;
unsigned short var_10 = (unsigned short)23422;
unsigned short var_12 = (unsigned short)36006;
int zero = 0;
unsigned long long int var_15 = 8432966850899237087ULL;
unsigned short var_16 = (unsigned short)17544;
unsigned short var_17 = (unsigned short)26573;
unsigned short var_18 = (unsigned short)57259;
unsigned short var_19 = (unsigned short)7611;
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
