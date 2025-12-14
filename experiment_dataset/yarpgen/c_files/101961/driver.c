#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)208;
signed char var_5 = (signed char)-60;
signed char var_10 = (signed char)71;
signed char var_11 = (signed char)-108;
signed char var_15 = (signed char)7;
int zero = 0;
unsigned int var_16 = 579280111U;
signed char var_17 = (signed char)86;
signed char var_18 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
