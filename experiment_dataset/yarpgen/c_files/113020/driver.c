#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 912876368;
short var_7 = (short)-31079;
signed char var_8 = (signed char)-62;
unsigned long long int var_10 = 17980373418579418888ULL;
unsigned int var_11 = 3902573278U;
int zero = 0;
unsigned short var_12 = (unsigned short)58954;
unsigned char var_13 = (unsigned char)158;
int var_14 = -1708190650;
signed char var_15 = (signed char)40;
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
