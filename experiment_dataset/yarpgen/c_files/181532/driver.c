#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-52;
unsigned short var_7 = (unsigned short)5094;
short var_8 = (short)31118;
int zero = 0;
unsigned long long int var_12 = 8566954017030979018ULL;
signed char var_13 = (signed char)63;
short var_14 = (short)30931;
unsigned long long int var_15 = 12263169446075405484ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
