#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)328;
unsigned short var_6 = (unsigned short)3699;
unsigned short var_8 = (unsigned short)29500;
unsigned int var_11 = 3581204749U;
unsigned short var_16 = (unsigned short)29546;
int zero = 0;
unsigned short var_17 = (unsigned short)16981;
short var_18 = (short)-27279;
unsigned int var_19 = 536036806U;
unsigned int var_20 = 2727959604U;
unsigned short var_21 = (unsigned short)58472;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
