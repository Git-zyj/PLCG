#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_16 = 2992218761U;
int var_17 = 830992662;
int zero = 0;
long long int var_19 = -2640504563103941635LL;
unsigned int var_20 = 1375900843U;
unsigned int var_21 = 1991719304U;
unsigned char var_22 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
