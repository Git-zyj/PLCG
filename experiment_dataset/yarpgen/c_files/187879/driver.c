#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49564;
short var_9 = (short)-11927;
unsigned long long int var_10 = 3517150306171587815ULL;
unsigned short var_16 = (unsigned short)5967;
int zero = 0;
unsigned short var_17 = (unsigned short)7161;
unsigned short var_18 = (unsigned short)13616;
unsigned long long int var_19 = 769561013267353489ULL;
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
