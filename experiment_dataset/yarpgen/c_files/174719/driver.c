#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2050774328U;
signed char var_5 = (signed char)32;
unsigned short var_6 = (unsigned short)64390;
unsigned short var_7 = (unsigned short)292;
long long int var_18 = 2242291181524203318LL;
int zero = 0;
signed char var_19 = (signed char)-70;
short var_20 = (short)16142;
unsigned long long int var_21 = 12115735299912660577ULL;
void init() {
}

void checksum() {
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
