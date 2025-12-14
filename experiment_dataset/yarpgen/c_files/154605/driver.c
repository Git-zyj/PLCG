#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27383;
short var_2 = (short)-26977;
short var_3 = (short)3342;
unsigned short var_4 = (unsigned short)48971;
int zero = 0;
short var_12 = (short)26130;
unsigned short var_13 = (unsigned short)3061;
short var_14 = (short)-14554;
unsigned short var_15 = (unsigned short)21889;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
