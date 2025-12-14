#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
signed char var_3 = (signed char)28;
int var_4 = -154567999;
int var_5 = -1888930650;
signed char var_6 = (signed char)15;
int var_8 = -2057314521;
int var_10 = -374751604;
int zero = 0;
unsigned char var_11 = (unsigned char)143;
signed char var_12 = (signed char)63;
void init() {
}

void checksum() {
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
