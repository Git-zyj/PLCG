#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)160;
signed char var_7 = (signed char)100;
unsigned long long int var_8 = 754306383380051235ULL;
unsigned int var_9 = 2672475131U;
signed char var_10 = (signed char)-33;
unsigned long long int var_12 = 18219250908221445312ULL;
unsigned short var_13 = (unsigned short)236;
unsigned short var_18 = (unsigned short)39351;
int zero = 0;
unsigned long long int var_20 = 14564504160780502545ULL;
unsigned int var_21 = 3143358455U;
signed char var_22 = (signed char)27;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
