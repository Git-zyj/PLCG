#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)18;
unsigned char var_8 = (unsigned char)186;
unsigned char var_10 = (unsigned char)45;
int var_12 = 210245662;
int zero = 0;
unsigned long long int var_19 = 12159953739280541066ULL;
signed char var_20 = (signed char)21;
unsigned char var_21 = (unsigned char)33;
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
