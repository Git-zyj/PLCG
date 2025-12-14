#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
short var_5 = (short)-31529;
unsigned long long int var_6 = 18429805882544559497ULL;
short var_8 = (short)18062;
short var_9 = (short)6899;
signed char var_12 = (signed char)-127;
int zero = 0;
short var_14 = (short)26292;
signed char var_15 = (signed char)-64;
unsigned short var_16 = (unsigned short)12238;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
