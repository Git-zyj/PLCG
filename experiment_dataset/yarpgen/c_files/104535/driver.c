#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned char var_2 = (unsigned char)168;
signed char var_5 = (signed char)98;
unsigned int var_15 = 2901143987U;
int zero = 0;
unsigned int var_18 = 4039675085U;
short var_19 = (short)-13133;
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
