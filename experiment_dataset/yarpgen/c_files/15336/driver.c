#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -2693347009561031705LL;
int var_10 = -19291958;
long long int var_11 = 8788458496905855274LL;
unsigned int var_15 = 1754100164U;
unsigned char var_18 = (unsigned char)48;
signed char var_19 = (signed char)-63;
int zero = 0;
unsigned long long int var_20 = 2067080184316024748ULL;
int var_21 = 1113642872;
void init() {
}

void checksum() {
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
