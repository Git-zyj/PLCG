#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)132;
short var_14 = (short)-5643;
int zero = 0;
unsigned int var_16 = 1409745616U;
unsigned long long int var_17 = 13213220677408033620ULL;
short var_18 = (short)-10257;
unsigned int var_19 = 1945324860U;
short var_20 = (short)19895;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
