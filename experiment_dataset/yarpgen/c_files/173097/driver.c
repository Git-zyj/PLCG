#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-8816;
unsigned short var_6 = (unsigned short)10488;
unsigned short var_7 = (unsigned short)54040;
int var_15 = 841443670;
int zero = 0;
int var_16 = -478396176;
unsigned long long int var_17 = 12200103624030573429ULL;
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
