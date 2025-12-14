#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2062774525;
int var_4 = -2103788933;
long long int var_8 = 2275781659466439549LL;
int zero = 0;
unsigned long long int var_20 = 9081065175199917986ULL;
unsigned short var_21 = (unsigned short)19997;
short var_22 = (short)-16904;
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
