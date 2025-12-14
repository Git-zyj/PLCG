#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
unsigned long long int var_1 = 8676392111287816682ULL;
unsigned short var_3 = (unsigned short)61487;
unsigned char var_4 = (unsigned char)67;
short var_7 = (short)1503;
int zero = 0;
short var_11 = (short)20956;
unsigned int var_12 = 577942288U;
unsigned char var_13 = (unsigned char)253;
unsigned short var_14 = (unsigned short)38919;
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
