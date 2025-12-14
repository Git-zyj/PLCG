#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6174578656422890064LL;
signed char var_3 = (signed char)55;
short var_4 = (short)-17553;
unsigned long long int var_11 = 11647012178155616293ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)236;
unsigned int var_14 = 2196588287U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
