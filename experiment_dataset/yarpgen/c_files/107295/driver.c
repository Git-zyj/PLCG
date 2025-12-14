#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1415268731;
unsigned long long int var_7 = 6809310883449024338ULL;
short var_8 = (short)-17127;
signed char var_11 = (signed char)33;
int zero = 0;
signed char var_12 = (signed char)111;
unsigned char var_13 = (unsigned char)169;
unsigned long long int var_14 = 7875694449596150987ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
