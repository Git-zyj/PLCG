#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
unsigned int var_3 = 66386773U;
int var_5 = 675477410;
int var_8 = -2121580612;
int zero = 0;
unsigned char var_10 = (unsigned char)49;
unsigned char var_11 = (unsigned char)71;
signed char var_12 = (signed char)92;
signed char var_13 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
