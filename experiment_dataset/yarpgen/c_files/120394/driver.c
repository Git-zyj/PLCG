#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)48;
int var_3 = 1906168434;
long long int var_5 = -6606291456289474869LL;
unsigned char var_10 = (unsigned char)6;
int var_13 = -1302821190;
signed char var_15 = (signed char)81;
int zero = 0;
long long int var_18 = -8253065483534603240LL;
unsigned long long int var_19 = 12299837931704898184ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
