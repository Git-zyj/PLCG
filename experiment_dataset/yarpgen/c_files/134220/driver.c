#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2551116083U;
signed char var_3 = (signed char)-51;
unsigned char var_4 = (unsigned char)147;
unsigned long long int var_17 = 15574516432194708382ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)253;
unsigned char var_19 = (unsigned char)53;
unsigned long long int var_20 = 13771152189982408899ULL;
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
