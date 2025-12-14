#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17039056975393011117ULL;
short var_11 = (short)-32744;
signed char var_13 = (signed char)-66;
unsigned char var_16 = (unsigned char)78;
signed char var_18 = (signed char)-79;
int zero = 0;
unsigned long long int var_19 = 17059101087275825113ULL;
unsigned char var_20 = (unsigned char)12;
signed char var_21 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
