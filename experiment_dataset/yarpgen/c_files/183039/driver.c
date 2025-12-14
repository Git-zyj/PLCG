#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_16 = (short)-27274;
unsigned long long int var_18 = 2030672276436323988ULL;
int zero = 0;
short var_19 = (short)28288;
signed char var_20 = (signed char)-86;
unsigned short var_21 = (unsigned short)62808;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
