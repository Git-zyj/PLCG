#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
unsigned int var_1 = 771366690U;
signed char var_3 = (signed char)-61;
int var_5 = -952845753;
int var_8 = -1967758396;
long long int var_11 = -8581639056129817002LL;
unsigned char var_13 = (unsigned char)119;
int zero = 0;
long long int var_20 = -9092075264182765161LL;
unsigned int var_21 = 1706293152U;
void init() {
}

void checksum() {
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
