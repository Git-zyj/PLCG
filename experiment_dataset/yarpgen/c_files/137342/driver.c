#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5710596147453693383ULL;
unsigned short var_16 = (unsigned short)56764;
unsigned short var_19 = (unsigned short)39310;
int zero = 0;
unsigned short var_20 = (unsigned short)26226;
unsigned short var_21 = (unsigned short)15943;
unsigned long long int var_22 = 6110201954947891946ULL;
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
