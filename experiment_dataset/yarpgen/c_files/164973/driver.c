#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26505;
unsigned long long int var_4 = 11080837271359809393ULL;
unsigned long long int var_7 = 9639869994826099401ULL;
unsigned char var_8 = (unsigned char)166;
int zero = 0;
unsigned int var_10 = 2041206682U;
signed char var_11 = (signed char)-10;
unsigned long long int var_12 = 3433499148875411408ULL;
unsigned int var_13 = 47189820U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
