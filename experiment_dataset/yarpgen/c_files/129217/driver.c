#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-23;
signed char var_8 = (signed char)-24;
unsigned int var_9 = 3280308441U;
long long int var_11 = 5607448517936409946LL;
unsigned int var_12 = 3484391755U;
int zero = 0;
unsigned char var_14 = (unsigned char)86;
unsigned char var_15 = (unsigned char)71;
signed char var_16 = (signed char)-103;
unsigned int var_17 = 769737190U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
