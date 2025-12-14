#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1536416503;
int var_6 = 1662598093;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)225;
int zero = 0;
unsigned char var_13 = (unsigned char)10;
unsigned char var_14 = (unsigned char)128;
signed char var_15 = (signed char)-19;
void init() {
}

void checksum() {
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
