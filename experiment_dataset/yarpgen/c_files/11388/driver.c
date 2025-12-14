#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8970;
signed char var_6 = (signed char)-33;
unsigned char var_7 = (unsigned char)66;
unsigned long long int var_9 = 7898401100743600902ULL;
int zero = 0;
unsigned int var_18 = 4172379906U;
unsigned int var_19 = 3265271290U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
