#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14267;
unsigned short var_15 = (unsigned short)53331;
short var_19 = (short)1659;
int zero = 0;
short var_20 = (short)-8684;
unsigned short var_21 = (unsigned short)859;
unsigned short var_22 = (unsigned short)8463;
unsigned short var_23 = (unsigned short)27240;
void init() {
}

void checksum() {
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
