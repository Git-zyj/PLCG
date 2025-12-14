#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4770;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-127;
int zero = 0;
unsigned char var_14 = (unsigned char)169;
int var_15 = 790988209;
short var_16 = (short)-24846;
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
