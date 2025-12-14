#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)56;
unsigned char var_5 = (unsigned char)86;
short var_15 = (short)-27798;
unsigned char var_19 = (unsigned char)96;
int zero = 0;
unsigned long long int var_20 = 13077814789490888310ULL;
signed char var_21 = (signed char)104;
unsigned long long int var_22 = 711061042109601360ULL;
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
