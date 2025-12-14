#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
short var_10 = (short)22537;
unsigned int var_11 = 153294073U;
unsigned long long int var_12 = 7148819782082538490ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)139;
unsigned long long int var_19 = 16349977046311601855ULL;
unsigned char var_20 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
