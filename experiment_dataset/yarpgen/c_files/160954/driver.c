#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2045833283;
int var_1 = 1254094057;
int var_2 = -1543622279;
int var_4 = -1540508098;
short var_6 = (short)-32025;
signed char var_7 = (signed char)-109;
unsigned char var_8 = (unsigned char)174;
short var_10 = (short)-28294;
int zero = 0;
short var_12 = (short)-16593;
long long int var_13 = -4766823549307022789LL;
unsigned char var_14 = (unsigned char)46;
int var_15 = 1413467397;
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
