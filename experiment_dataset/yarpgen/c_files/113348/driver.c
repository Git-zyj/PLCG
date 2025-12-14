#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-16;
unsigned char var_10 = (unsigned char)251;
signed char var_11 = (signed char)-86;
int var_17 = 1081312280;
int zero = 0;
int var_18 = -1311820484;
unsigned char var_19 = (unsigned char)163;
void init() {
}

void checksum() {
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
