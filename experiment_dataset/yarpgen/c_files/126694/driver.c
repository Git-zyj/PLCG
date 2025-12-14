#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)21;
int var_4 = -455832351;
unsigned char var_5 = (unsigned char)185;
int var_6 = 825198497;
short var_7 = (short)-28466;
unsigned long long int var_10 = 1287575229126758641ULL;
int var_11 = 1566259439;
int zero = 0;
signed char var_12 = (signed char)29;
unsigned long long int var_13 = 12204878878811823387ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
