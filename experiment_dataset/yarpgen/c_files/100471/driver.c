#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
signed char var_1 = (signed char)1;
unsigned char var_2 = (unsigned char)148;
unsigned char var_5 = (unsigned char)204;
unsigned char var_16 = (unsigned char)22;
int zero = 0;
unsigned long long int var_17 = 4668640347909914903ULL;
unsigned long long int var_18 = 16141141727649139667ULL;
int var_19 = 737193832;
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
