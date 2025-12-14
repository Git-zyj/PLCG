#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12300796959281697748ULL;
unsigned long long int var_14 = 4547709189631402777ULL;
unsigned short var_16 = (unsigned short)7475;
int zero = 0;
short var_20 = (short)15620;
short var_21 = (short)-10004;
unsigned short var_22 = (unsigned short)28978;
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
