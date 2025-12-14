#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1209173823076538398ULL;
unsigned long long int var_2 = 4385191501499924235ULL;
short var_5 = (short)-19476;
int var_11 = -163434384;
short var_13 = (short)-26784;
short var_14 = (short)12909;
unsigned long long int var_15 = 14441486245318964094ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)128;
unsigned long long int var_17 = 13959356413694627164ULL;
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
