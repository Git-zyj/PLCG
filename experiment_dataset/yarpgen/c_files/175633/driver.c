#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11347;
short var_1 = (short)-30843;
unsigned short var_3 = (unsigned short)25456;
short var_10 = (short)-17657;
unsigned char var_12 = (unsigned char)141;
int zero = 0;
int var_19 = 243047426;
short var_20 = (short)31235;
unsigned long long int var_21 = 15599089874079341227ULL;
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
