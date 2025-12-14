#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12560;
unsigned long long int var_9 = 11778410840186418284ULL;
unsigned short var_11 = (unsigned short)42903;
short var_15 = (short)12120;
short var_18 = (short)-1480;
int zero = 0;
signed char var_19 = (signed char)-84;
unsigned short var_20 = (unsigned short)43704;
unsigned short var_21 = (unsigned short)18946;
long long int var_22 = 3447379163059431473LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
