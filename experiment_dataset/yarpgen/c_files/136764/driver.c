#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3373633406U;
signed char var_6 = (signed char)-124;
unsigned long long int var_7 = 2539128175035238901ULL;
signed char var_11 = (signed char)35;
int zero = 0;
short var_12 = (short)-9904;
signed char var_13 = (signed char)-63;
int var_14 = 2029568203;
void init() {
}

void checksum() {
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
