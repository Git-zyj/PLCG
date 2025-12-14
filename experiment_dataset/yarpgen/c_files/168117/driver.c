#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1376510046;
signed char var_10 = (signed char)-51;
unsigned long long int var_11 = 3659978649809830010ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)81;
signed char var_14 = (signed char)-65;
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
