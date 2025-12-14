#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)86;
signed char var_7 = (signed char)105;
int var_11 = -1091610844;
unsigned int var_12 = 4281012972U;
unsigned short var_14 = (unsigned short)29797;
int zero = 0;
long long int var_16 = 3097519095209870583LL;
short var_17 = (short)-16371;
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
