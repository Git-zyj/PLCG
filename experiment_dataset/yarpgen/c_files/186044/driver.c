#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
signed char var_4 = (signed char)-76;
int var_6 = -1663239633;
signed char var_7 = (signed char)58;
unsigned char var_8 = (unsigned char)195;
unsigned long long int var_9 = 2323843263628096591ULL;
short var_10 = (short)-13309;
int zero = 0;
unsigned int var_14 = 1683691634U;
unsigned int var_15 = 593676982U;
long long int var_16 = 7668224141647855172LL;
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
