#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 9674283287899839972ULL;
unsigned long long int var_10 = 12191283650770604683ULL;
short var_18 = (short)-19629;
int zero = 0;
unsigned short var_19 = (unsigned short)47360;
unsigned int var_20 = 4276409289U;
unsigned char var_21 = (unsigned char)109;
short var_22 = (short)20110;
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
