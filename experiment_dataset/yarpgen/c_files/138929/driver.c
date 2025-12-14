#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
unsigned char var_3 = (unsigned char)29;
signed char var_10 = (signed char)103;
unsigned short var_15 = (unsigned short)49451;
int zero = 0;
unsigned short var_17 = (unsigned short)16759;
signed char var_18 = (signed char)29;
unsigned short var_19 = (unsigned short)38153;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
