#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)108;
int var_4 = -1362850370;
unsigned int var_5 = 1522761652U;
signed char var_7 = (signed char)-68;
int zero = 0;
unsigned char var_10 = (unsigned char)194;
unsigned char var_11 = (unsigned char)84;
signed char var_12 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
