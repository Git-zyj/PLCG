#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2123090531;
unsigned char var_8 = (unsigned char)43;
int var_13 = 643748134;
int zero = 0;
unsigned short var_19 = (unsigned short)9136;
unsigned short var_20 = (unsigned short)26373;
unsigned short var_21 = (unsigned short)21542;
void init() {
}

void checksum() {
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
