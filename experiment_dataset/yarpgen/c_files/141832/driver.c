#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42319;
unsigned long long int var_5 = 10183748043241238916ULL;
short var_6 = (short)30507;
short var_10 = (short)-28029;
short var_12 = (short)-5204;
short var_14 = (short)11034;
int zero = 0;
unsigned long long int var_16 = 6845367983982290614ULL;
unsigned long long int var_17 = 7707051475376902445ULL;
short var_18 = (short)-27170;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
