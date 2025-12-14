#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -461340781;
signed char var_10 = (signed char)-112;
int var_15 = -1159687445;
long long int var_16 = -2657496474433006970LL;
unsigned short var_19 = (unsigned short)7441;
int zero = 0;
short var_20 = (short)5470;
int var_21 = -922894600;
unsigned short var_22 = (unsigned short)20534;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
