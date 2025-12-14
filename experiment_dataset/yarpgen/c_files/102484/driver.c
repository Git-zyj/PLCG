#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 2237234313U;
short var_12 = (short)-9183;
unsigned char var_13 = (unsigned char)169;
unsigned char var_17 = (unsigned char)184;
int zero = 0;
long long int var_20 = -5318022963086906978LL;
unsigned int var_21 = 3977626362U;
signed char var_22 = (signed char)-75;
void init() {
}

void checksum() {
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
