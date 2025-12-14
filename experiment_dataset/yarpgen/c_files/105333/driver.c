#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50588;
unsigned long long int var_4 = 13827920650419373627ULL;
unsigned short var_6 = (unsigned short)25194;
signed char var_10 = (signed char)-16;
int zero = 0;
short var_11 = (short)13743;
unsigned char var_12 = (unsigned char)160;
unsigned long long int var_13 = 1319981877468989951ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
