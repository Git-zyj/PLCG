#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)726;
unsigned short var_15 = (unsigned short)10267;
signed char var_19 = (signed char)-91;
int zero = 0;
unsigned char var_20 = (unsigned char)52;
unsigned long long int var_21 = 7997511460122066313ULL;
void init() {
}

void checksum() {
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
