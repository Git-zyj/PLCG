#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2477262228U;
int var_3 = -1100447486;
int var_4 = -1835643803;
unsigned char var_6 = (unsigned char)37;
unsigned char var_8 = (unsigned char)207;
signed char var_11 = (signed char)117;
int zero = 0;
unsigned char var_15 = (unsigned char)83;
unsigned long long int var_16 = 15992497077113115087ULL;
void init() {
}

void checksum() {
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
