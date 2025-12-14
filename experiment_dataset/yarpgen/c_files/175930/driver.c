#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19208;
short var_3 = (short)14125;
unsigned char var_5 = (unsigned char)83;
unsigned char var_8 = (unsigned char)195;
int zero = 0;
unsigned char var_11 = (unsigned char)147;
unsigned int var_12 = 385139269U;
unsigned int var_13 = 3435524619U;
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
