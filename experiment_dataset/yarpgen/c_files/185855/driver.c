#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-107;
short var_3 = (short)-7148;
unsigned short var_10 = (unsigned short)48666;
int var_15 = -605094355;
unsigned short var_18 = (unsigned short)750;
int zero = 0;
signed char var_19 = (signed char)109;
unsigned short var_20 = (unsigned short)55802;
short var_21 = (short)-6881;
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
