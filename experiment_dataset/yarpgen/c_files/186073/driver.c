#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2473070320661052802LL;
unsigned long long int var_2 = 5773217807359369204ULL;
unsigned short var_3 = (unsigned short)36223;
short var_5 = (short)-29941;
unsigned long long int var_7 = 14788152113536520118ULL;
unsigned short var_8 = (unsigned short)52035;
int zero = 0;
signed char var_11 = (signed char)-87;
long long int var_12 = 8959965586505689493LL;
unsigned int var_13 = 4252308594U;
unsigned int var_14 = 740647249U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
