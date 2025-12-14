#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
unsigned long long int var_2 = 13388905733802157937ULL;
unsigned long long int var_4 = 17928950707589296585ULL;
short var_7 = (short)22138;
int var_15 = 1708065012;
unsigned char var_16 = (unsigned char)229;
int zero = 0;
unsigned short var_17 = (unsigned short)849;
int var_18 = -1386925681;
unsigned long long int var_19 = 7302745892656626581ULL;
void init() {
}

void checksum() {
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
